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
There will always be only one integer that appears an odd number of times.<br>


## Are they the "same"?<br>
### theSame.hpp<br>
Given two arrays a and b write a function comp(a, b) (compSame(a, b) in Clojure) that checks whether the two arrays have the "same" elements, with the same multiplicities. "Same" means, here, that the elements in b are the elements in a squared, regardless of the order.<br>
<br>
Examples<br>
Valid arrays<br>
a = [121, 144, 19, 161, 19, 144, 19, 11]  <br>
b = [121, 14641, 20736, 361, 25921, 361, 20736, 361]<br>
comp(a, b) returns true because in b 121 is the square of 11, 14641 is the square of 121, 20736 the square of 144, 361 the square of 19, 25921 the square of 161, and so on. It gets obvious if we write b's elements in terms of squares:<br>
<br>
a = [121, 144, 19, 161, 19, 144, 19, 11] <br>
b = [11*11, 121*121, 144*144, 19*19, 161*161, 19*19, 144*144, 19*19]<br>
Invalid arrays<br>
If we change the first number to something else, comp may not return true anymore:<br>
<br>
a = [121, 144, 19, 161, 19, 144, 19, 11]  <br>
b = [132, 14641, 20736, 361, 25921, 361, 20736, 361]<br>
comp(a,b) returns false because in b 132 is not the square of any number of a.
<br>
a = [121, 144, 19, 161, 19, 144, 19, 11]  <br>
b = [121, 14641, 20736, 36100, 25921, 361, 20736, 361]<br>
comp(a,b) returns false because in b 36100 is not the square of any number of a.
<br>
Remarks<br>
a or b might be [] (all languages except R, Shell). a or b might be nil or null or None or nothing (except in Haskell, Elixir, C++, Rust, R, Shell, PureScript).<br>
<br>
If a or b are nil (or null or None), the problem doesn't make sense so return false.<br>
If a or b are empty then the result is self-evident.<br>
a or b are empty or not empty lists.<br>


## Roman Numerals Decoder<br>
### RomanNumerals.hpp<br>
Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.<br>
Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.<br>
<br>
Example:<br>
<br>
solution("XXI"); // => 21<br>
Help:<br>
<br>
Symbol    Value<br>
I          1<br>
V          5<br>
X          10<br>
L          50<br>
C          100<br>
D          500<br>
M          1,000<br>



## Equal Sides Of An Array<br>
### FindEvenIndex.hpp<br>
You are going to be given an array of integers. Your job is to take that array and find an index N where the sum of the integers to the left of N is equal to the sum of the integers to the right of N. If there is no index that would make this happen, return -1.<br>
<br>
For example:<br>
<br>
Let's say you are given the array {1,2,3,4,3,2,1}:<br>
Your function will return the index 3, because at the 3rd position of the array, the sum of left side of the index ({1,2,3}) and the sum of the right side of the index ({3,2,1}) both equal 6.<br>
<br>
Let's look at another one.<br>
You are given the array {1,100,50,-51,1,1}:<br>
Your function will return the index 1, because at the 1st position of the array, the sum of left side of the index ({1}) and the sum of the right side of the index ({50,-51,1,1}) both equal 1.<br>
<br>
Last one:<br>
You are given the array {20,10,-80,10,10,15,35}<br>
At index 0 the left side is {}<br>
The right side is {10,-80,10,10,15,35}<br>
They both are equal to 0 when added. (Empty arrays are equal to 0 in this problem)<br>
Index 0 is the place where the left side and right side are equal.<br>
<br>
Note: Please remember that in most programming/scripting languages the index of an array starts at 0.<br>
<br>
Input:<br>
An integer array of length 0 < arr < 1000. The numbers in the array can be any integer positive or negative.<br>
<br>
Output:<br>
The lowest index N where the side to the left of N is equal to the side to the right of N. If you do not find an index that fits these rules, then you will return -1.<br>
<br>
Note:<br>
If you are given an array with multiple answers, return the lowest correct index.<br>
An empty array should be treated like a 0 in this problem.<br>


## Tribonacci Sequence<br>
### Tribonacci.hpp<br>
Well met with Fibonacci bigger brother, AKA Tribonacci.<br>
<br>
As the name may already reveal, it works basically like a Fibonacci, but summing the last 3 (instead of 2) numbers of the sequence to generate the next. And, worse part of it, regrettably I won't get to hear non-native Italian speakers trying to pronounce it :(<br>
<br>
So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input (AKA signature), we have this sequence:<br>
<br>
[1, 1 ,1, 3, 5, 9, 17, 31, ...]<br>
But what if we started with [0, 0, 1] as a signature? As starting with [0, 1] instead of [1, 1] basically shifts the common Fibonacci sequence by once place, you may be tempted to think that we would get the same sequence shifted by 2 places, but that is not the case and we would get:
<br>
[0, 0, 1, 1, 2, 4, 7, 13, 24, ...]<br>
Well, you may have guessed it by now, but to be clear: you need to create a fibonacci function that given a signature array/list, returns the first n elements - signature included of the so seeded sequence.
<br>
Signature will always contain 3 numbers; n will always be a non-negative number; if n == 0, then return an empty array (except in C return NULL) and be ready for anything else which is not clearly specified ;)
<br>
If you enjoyed this kata more advanced and generalized version of it can be found in the Xbonacci kata
<br>
*[Personal thanks to Professor Jim Fowler on Coursera for his awesome classes that I really recommend to any math enthusiast and for showing me this mathematical curiosity too with his usual contagious passion :)]*


## Which are in?<br>
### WhichAreIn.hpp<br>
Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.<br>
#Example 1: a1 = ["arp", "live", "strong"]<br>
a2 = ["lively", "alive", "harp", "sharp", "armstrong"]<br>
returns ["arp", "live", "strong"]<br>
#Example 2: a1 = ["tarp", "mice", "bull"]<br>
a2 = ["lively", "alive", "harp", "sharp", "armstrong"]<br>
returns []<br>
<br>
Notes:<br>
Arrays are written in "general" notation. See "Your Test Cases" for examples in your language.<br>
In Shell bash a1 and a2 are strings. The return is a string where words are separated by commas.<br>
Beware: r must be without duplicates.<br>
Don't mutate the inputs.<br>


## Mr. Safety's treasures<br>
### unlock.hpp<br>
Introduction<br>
Mr. Safety loves numeric locks and his Nokia 3310. He locked almost everything in his house. He is so smart and he doesn't need to remember the combinations. He has an algorithm to generate new passcodes on his Nokia cell phone. <br>
Task<br>
Can you crack his numeric locks? Mr. Safety's treasures wait for you. Write an algorithm to open his numeric locks. Can you do it without his Nokia 3310?<br>
<br>
Input<br>
The str input string consists of lowercase and upercase characters. It's a real object that you want to unlock.

Output<br>
Return a string that only consists of digits.<br>
Example<br>
``` unlock("Nokia") // => 66542 unlock("Valut") // => 82588 unlock("toilet") // => 864538 ```