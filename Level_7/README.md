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


## Get the Middle Character
### get_middle.hpp<br>
You are going to be given a word. Your job is to return the middle character of the word. If the word's length is odd, return the middle character. If the word's length is even, return the middle 2 characters.<br>
#Examples:<br>
Kata.getMiddle("test") should return "es"<br>
Kata.getMiddle("testing") should return "t"<br>
Kata.getMiddle("middle") should return "dd"<br>
Kata.getMiddle("A") should return "A"<br>
#Input<br>
A word (string) of length 0 < str < 1000 (In javascript you may get slightly more than 1000 in some test cases due to an error in the test cases). You do not need to test for this. This is only here to tell you that you do not need to worry about your solution timing out.<br>
#Output<br>
The middle character(s) of the word represented as a string.<br>


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

## Rotate for a Max
### MaxRotate.hpp<br>
Let us begin with an example:<br>
Take a number: 56789. Rotate left, you get 67895.<br>
Keep the first digit in place and rotate left the other digits: 68957.<br>
Keep the first two digits in place and rotate the other ones: 68579.<br>
Keep the first three digits and rotate left the rest: 68597. Now it is over since keeping the first four it remains only one digit which rotated is itself.<br>
You have the following sequence of numbers:<br>
56789 -> 67895 -> 68957 -> 68579 -> 68597<br>
and you must return the greatest: 68957.<br>
<br>
Task<br>
Write function max_rot(n) which given a positive integer n returns the maximum number you got doing rotations similar to the above example.<br>
So max_rot (or maxRot or ... depending on the language) is such as:<br>
max_rot(56789) should return 68957<br>
max_rot(38458215) should return 85821534<br>