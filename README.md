In this repository, I'll solve some challenges with c++
Every challenge will have it's own hpp file

The scale of difficulty is from the higher numbers to the lower.
such that the easiest is 7.
And the toughest is 1.

## Cmake on Windows:
```bash
cd build
cmake -G "Unix Makefiles" ..
make
CppPractice
```
## Another option:
```bash
g++ test-main.cpp -c
g++ test.cpp -c
g++ test-main.o test.o -o tests && ./tests -r compact
```



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


## Rainfall
### rainfall.hpp
data and data1 are two strings with rainfall records of a few cities for months from January to December. The records of towns are separated by \n. The name of each town is followed by :.<br>
<br>
data and towns can be seen in "Your Test Cases:".<br>
<br>
Task:<br>
function: mean(town, strng) should return the average of rainfall for the city town and the strng data or data1 (In R and Julia this function is called avg).<br>
function: variance(town, strng) should return the variance of rainfall for the city town and the strng data or data1.
Examples:<br>
mean("London", data), 51.19(9999999999996) <br>
variance("London", data), 57.42(833333333374)<br>
Notes:<br>
if functions mean or variance have as parameter town a city which has no records return -1 or -1.0 (depending on the language)
Don't truncate or round: the tests will pass if abs(your_result - test_result) <= 1e-2 or abs((your_result - test_result) / test_result) <= 1e-6 depending on the language.<br>
Shell tests only variance<br>
A ref: http://www.mathsisfun.com/data/standard-deviation.html<br>
data and data1 (can be named d0 and d1 depending on the language; see "Sample Tests:") are adapted from: http://www.worldclimate.com

## Find the odd int
### oddInt.hpp
Given an array, find the int that appears an odd number of times.<br>
There will always be only one integer that appears an odd number of times.