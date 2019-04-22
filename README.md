In this repository, I'll solve some challenges in c++
Every challenge will have it's own h and cpp files

## reverse
<br>
reverse.hpp<br>
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
short.hpp<br>
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.

## Encode sting
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