In this repository, I'll solve some challenges with c++
Every challenge will have it's own hpp file

The scale of difficulty is from the higher numbers to the lower.
such that the easiest is 7.
And the toughest is 1.

# Level 7
## reverse
### reverse.hpp<br>
Task<br>
Given a string str, reverse it omitting all non-alphabetic characters.<br>

Example<br>
For str = "krishan", the output should be "nahsirk".<br>

For str = "ultr53o?n", the output should be "nortlu".<br>

Input/Output<br>
[input] string str<br>

A string consists of lowercase latin letters, digits and symbols.<br>

[output] a string<br>

## short string
### short.hpp<br>
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.

## Encode sting
### Cypher.hpp<br>
Digital Cypher assigns to each letter of the alphabet unique number. For example:<br>
<br>
 a  b  c  d  e  f  g  h  i  j  k  l  m<br>
 1  2  3  4  5  6  7  8  9 10 11 12 13<br>
 n  o  p  q  r  s  t  u  v  w  x  y  z<br>
14 15 16 17 18 19 20 21 22 23 24 25 26<br>
Instead of letters in encrypted word we write the corresponding number, eg. The word scout:<br>
<br>
 s  c  o  u  t<br>
19  3 15 21 20<br>
Then we add to each obtained digit consecutive digits from the key. For example. In case of key equal to 1939 :<br>
<br>
s  c  o  u  t<br>
19  3 15 21 20<br>
+<br>
1  9  3  9  1<br>
---------------<br>
20 12 18 30 21<br>
<br>
m  a  s  t  e  r  p  i  e  c  e<br>
13  1 19 20  5 18 16  9  5  3  5<br>
+<br>
1  9  3  9  1  9  3  9  1  9  3<br>
--------------------------------<br>
14 10 22 29  6 27 19 18  6  12 8<br>
Task<br>
Write a function that accepts str string and key number and returns an array of integers representing encoded str.<br>
<br>
Input / Output<br>
The str input string consists of lowercase characters only.<br>
The key input number is a positive integer.<br>
<br>
Example<br>
Encode("scout",1939);  ==>  [ 20, 12, 18, 30, 21]<br>
Encode("masterpiece",1939);  ==>  [ 14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8]

## Like
### like.hpp<br>
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items.<br> 
We want to create the text that should be displayed next to such an item.<br>

Implement a function likes :: [String] -> String, which must take in input array, containing the names of people who like an item. It must return the display text as shown in the examples:<br>

likes {} // must be "no one likes this"<br>
likes {"Peter"} // must be "Peter likes this"<br>
likes {"Jacob", "Alex"} // must be "Jacob and Alex like this"<br>
likes {"Max", "John", "Mark"} // must be "Max, John and Mark like this"<br>
likes {"Alex", "Jacob", "Mark", "Max"} // must be "Alex, Jacob and 2 others like this"<br>
For 4 or more names, the number in and 2 others simply increases.

# Level 6
## Braces
### Braces.hpp
Write a function that takes a string of braces, and determines if the order of the braces is valid.<br> 
It should return true if the string is valid, and false if it's invalid.<br>
<br>
This Kata is similar to the Valid Parentheses Kata, but introduces new characters: brackets [], and curly braces {}.<br> 
Thanks to @arnedag for the idea!<br>
<br>
All input strings will be nonempty, and will only consist of parentheses, brackets and curly braces: ()[]{}.<br>
<br>
What is considered Valid?<br>
A string of braces is considered valid if all braces are matched with the correct brace.<br>
<br>
Examples<br>
"(){}[]"   =>  True<br>
"([{}])"   =>  True<br>
"(}"       =>  False<br>
"[(])"     =>  False<br>
"[({})](]" =>  False<br>




# Level 6
## statistics
### stat.hpp
You are the "computer expert" of a local Athletic Association (C.A.A.). Many teams of runners come to compete. <br>
Each time you get a string of all race results of every team who has run. <br>
For example here is a string showing the individual results of a team of 5 runners:<br>
<br>
"01|15|59, 1|47|6, 01|17|20, 1|32|34, 2|3|17"<br>
<br>
Each part of the string is of the form: h|m|s where h, m, s (h for hour, m for minutes, s for seconds) are positive or null<br> integer (represented as strings) with one or two digits. There are no traps in this format.<br>
<br>
To compare the results of the teams you are asked for giving three statistics; range, average and median.<br>
<br>
Range : difference between the lowest and highest values. In {4, 6, 9, 3, 7} the lowest value is 3, and the highest is 9, so the range is 9 − 3 = 6.<br>
<br>
Mean or Average : To calculate mean, add together all of the numbers in a set and then divide the sum by the total count of numbers.<br>
<br>
Median : In statistics, the median is the number separating the higher half of a data sample from the lower half. The median of a finite list of numbers can be found by arranging all the observations from lowest value to highest value and picking the middle one (e.g., the median of {3, 3, 5, 9, 11} is 5) when there is an odd number of observations. If there is an even number of observations, then there is no single middle value; the median is then defined to be the mean of the two middle values (the median of {3, 5, 6, 9} is (5 + 6) / 2 = 5.5).<br>
<br>
Your task is to return a string giving these 3 values. For the example given above, the string result will be
<br>
"Range: 00|47|18 Average: 01|35|15 Median: 01|32|34"
<br>
of the form:<br>

"Range: hh|mm|ss Average: hh|mm|ss Median: hh|mm|ss"<br>
<br>
where hh, mm, ss are integers (represented by strings) with each 2 digits.<br>
<br>
Remarks:<br>
<br>
if a result in seconds is ab.xy... it will be given truncated as ab.<br>
<br>
if the given string is "" you will return ""