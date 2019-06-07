# Level 5
## A Chain adding function
### Chain.hpp
We want to create a function that will add numbers together when called in succession.<br>
<br>
add(1)(2);<br>
// returns 3<br>
We also want to be able to continue to add numbers to our chain.<br>
<br>
add(1)(2)(3); // 6<br>
add(1)(2)(3)(4); // 10<br>
add(1)(2)(3)(4)(5); // 15<br>
and so on.<br>
<br>
A single call should return the number passed in.<br>
<br>
add(1); // 1<br>
We should be able to store the returned values and reuse them.<br>
<br>
var addTwo = add(2);<br>
addTwo; // 2<br>
addTwo + 5; // 7<br>
addTwo(3); // 5<br>
addTwo(3)(5); // 10<br>
We can assume any number being passed in will be valid whole number.<br>




## Directions Reduction<br>
### DirReduction.hpp<br>
Once upon a time, on a way through the old wild west,…<br>
… a man was given directions to go from one point to another. The directions were "NORTH", "SOUTH", "WEST", "EAST". Clearly "NORTH" and "SOUTH" are opposite, "WEST" and "EAST" too. Going to one direction and coming back the opposite direction is a needless effort. Since this is the wild west, with dreadfull weather and not much water, it's important to save yourself some energy, otherwise you might die of thirst!
<br>
How I crossed the desert the smart way.<br>
The directions given to the man are, for example, the following:<br>
<br>
["NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"].<br>
or<br>
<br>
{ "NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST" };<br>
or (haskell)<br>

[North, South, South, East, West, North, West]<br>
You can immediatly see that going "NORTH" and then "SOUTH" is not reasonable, better stay to the same place! So the task is to give to the man a simplified version of the plan. A better plan in this case is simply:<br>
<br>
["WEST"]<br>
or<br>
<br>
{ "WEST" }<br>
or (haskell)<br>
<br>
[West]<br>
or (rust)<br>
<br>
[WEST];<br>
Other examples:<br>
In ["NORTH", "SOUTH", "EAST", "WEST"], the direction "NORTH" + "SOUTH" is going north and coming back right away. What a waste of time! Better to do nothing.<br>
<br>
The path becomes ["EAST", "WEST"], now "EAST" and "WEST" annihilate each other, therefore, the final result is [] (nil in Clojure).
<br>
In ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"], "NORTH" and "SOUTH" are not directly opposite but they become directly opposite after the reduction of "EAST" and "WEST" so the whole path is reducible to ["WEST", "WEST"].
<br>
Task<br>
Write a function dirReduc which will take an array of strings and returns an array of strings with the needless directions removed (W<->E or S<->N side by side).
<br>
The Haskell version takes a list of directions with data Direction = North | East | West | South. The Clojure version returns nil when the path is reduced to nothing. The Rust version takes a slice of enum Direction {NORTH, SOUTH, EAST, WEST}.
<br>
Examples<br>
dirReduc(@[@"NORTH", @"SOUTH", @"SOUTH", @"EAST", @"WEST", @"NORTH", @"WEST"]); // => @[@"WEST"]<br>
dirReduc(@[@"NORTH", @"SOUTH", @"SOUTH", @"EAST", @"WEST", @"NORTH"]); // => @[]<br>
See more examples in "Example Tests"<br>
Note<br>
Not all paths can be made simpler. The path ["NORTH", "WEST", "SOUTH", "EAST"] is not reducible. "NORTH" and "WEST", "WEST" and "SOUTH", "SOUTH" and "EAST" are not directly opposite of each other and can't become such. Hence the result path is itself : ["NORTH", "WEST", "SOUTH", "EAST"].