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