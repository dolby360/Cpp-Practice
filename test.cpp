#include "include/catch.hpp"
#include "Level_6/findMissingLetter.hpp"
#ifdef DEBUG_ALL
#include "Level_6/tickets.hpp"
#include "Level_6/LongestConsec.hpp"
#include "Level_5/DirReduction.hpp"
#include <iostream>
#include <string>
#include "Level_7/Printer.hpp"
#include "Level_6/unlock.hpp"
#include "Level_7/Opstrings.hpp"
#include "Level_5/Chain.hpp"
#include <vector>
#include "Level_6/WhichAreIn.hpp"
#include "Level_7/Anagram.hpp"
#include "Level_6/Tribonacci.hpp"
#include "Level_6/FindEvenIndex.hpp"
#include "Level_7/PartList.hpp"
#include "Level_7/get_middle.hpp"
#include "Level_6/theSame.hpp"
#include "Level_6/RomanNumerals.hpp"
#endif


TEST_CASE("Consecutive strings"){    
    char arr1[] = { 'a','b','c','d','f' };
    char arr2[] = { 'O','Q','R','S' };
    REQUIRE(
        findMissingLetter(arr1, 5) == 'e'
    );
    REQUIRE(
        findMissingLetter(arr2, 4) == 'P'
    );
}


#ifdef DEBUG_ALL

TEST_CASE("Consecutive strings"){    
    REQUIRE(
        tickets( {25, 25, 50, 50} ) == "YES"
    );
    REQUIRE(
        tickets( {25, 100} ) == "NO"
    );
    REQUIRE(
        tickets( {25,25,50,50,25,25,25,25,50,50} ) == "YES"
    );
    REQUIRE(
        tickets( {50 ,25, 25, 25, 25 } ) == "NO"
    );
}

TEST_CASE("Consecutive strings"){    
    std::vector<std::string> arr = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
    std::string res = LongestConsec::longestConsec(arr, 2);
    REQUIRE( res == "abigailtheta");
    arr = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
    res = LongestConsec::longestConsec(arr,1);
    REQUIRE(res == "oocccffuucccjjjkkkjyyyeehh");
}

TEST_CASE("Directions Reduction"){
    std::vector<std::string> d1 = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    std::vector<std::string> ans1 = DirReduction::dirReduc(d1);
    std::vector<std::string> sol1 = {"WEST"};
    REQUIRE(ans1 == sol1);

    std::vector<std::string> d2 = {"NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH"};
    std::vector<std::string> ans2 = DirReduction::dirReduc(d2);
    std::vector<std::string> sol2 = {"NORTH"};
    REQUIRE(ans2 == sol2);
}


TEST_CASE("Printer Errors"){
    std::string s = "aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz";
    REQUIRE( Printer::printerError(s) == "3/56");
    s = "kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz";
    REQUIRE( Printer::printerError(s) == "6/60");
    s = "kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu";
    REQUIRE( Printer::printerError(s) == "11/65");
}

TEST_CASE("Mr. Safety's treasures"){
    REQUIRE(  unlock("Nokia")      == "66542"      );
    REQUIRE(  unlock("Valut")      == "82588"      );
    REQUIRE(  unlock("toilet")     == "864538"     );
    REQUIRE(  unlock("waterheater")== "92837432837");
    REQUIRE(  unlock("birdhouse")  == "247346873"  );
}

TEST_CASE("Moves in squared strings (I)"){
    std::string s = "hSgdHQ\nHnDMao\nClNNxX\niRvxxH\nbqTVvA\nwvSyRu";
    std::string sol = "QHdgSh\noaMDnH\nXxNNlC\nHxxvRi\nAvVTqb\nuRySvw";
    std::string res = Opstrings::oper( Opstrings::vertMirror, s );
    REQUIRE(res == sol);
    

    s = "lVHt\nJVhv\nCSbg\nyeCt";
    sol = "yeCt\nCSbg\nJVhv\nlVHt";
    res = Opstrings::oper( Opstrings::horMirror, s );
    REQUIRE(res == sol);
}

TEST_CASE("A Chain adding function"){
    /*
    Can't use the usual framework due to a bug with operators overloading.
    */
    if(add(1) != 1){
        std::cout << ":(";
    }
    if(add(1)(2) != 3){
        std::cout << ":(";
    }
    if(add(1)(2)(3) != 6){
        std::cout << ":(";
    }
}

TEST_CASE("Which are in?"){
    std::vector<std::string> arr1 = { "arp", "live", "strong" };
    std::vector<std::string> arr2 = { "lively", "alive", "harp", "sharp", "armstrong" };
    std::vector<std::string> sol1 = { "arp", "live", "strong" };
    std::vector<std::string> ans1 = WhichAreIn::inArray(arr1, arr2);
    REQUIRE(ans1 == sol1);
}

TEST_CASE("Is Anagram"){
    REQUIRE( isAnagram("foefet", "toffee")          == true);
    REQUIRE( isAnagram( "Buckethead", "DeathCubeK") == true);
    REQUIRE( isAnagram("Twoo", "WooT")              == true );
    REQUIRE( isAnagram("dumble", "bumble")          == false);
    REQUIRE( isAnagram("around", "round")           == false);
    REQUIRE( isAnagram("ound", "round")             == false);
    REQUIRE( isAnagram("apple", "pale")             == false);
    REQUIRE( isAnagram("apple", "appeal")           == false);
    REQUIRE( isAnagram("apple", "appeal")           == false);
    REQUIRE( isAnagram("", "")                      == true);
}

TEST_CASE("Tribonacci"){
    std::vector<int> signature = { 1, 1, 1 };
    std::vector<int> expected = { 1, 1, 1, 3, 5, 9, 17, 31, 57, 105 };
    std::vector<int> ret= tribonacci(signature,10);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }
    
    signature = { 0, 0, 1 };
    expected = { 0,0,1,1,2,4,7,13,24,44 };
    ret= tribonacci(signature,10);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }

    signature = { 0, 1, 1 };
    expected = { 0,1,1,2,4,7,13,24,44,81 };
    ret= tribonacci(signature,10);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }

    signature = { 1, 0,  0 };
    expected = { 1, 0, 0, 1, 1, 2, 4, 7, 13, 24 };
    ret= tribonacci(signature,10);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }
    
    signature = { 1,2,3 };
    expected = { 1,2,3,6,11,20,37,68,125,230 };
    ret= tribonacci(signature,10);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }
    
    signature = { 1,2,3 };
    expected = { 1,2 };
    ret= tribonacci(signature,2);
    REQUIRE( ret.size() == expected.size());
    for(int i = 0; i <  ret.size(); i++){
        REQUIRE( ret[i] == expected[i]);
    }
}


TEST_CASE("Equal Sides Of An Array"){
    vector <int> numbers { 1,2,3,4,3,2,1 };
    int res = find_even_index (numbers);
    REQUIRE( res == 3);

    numbers = { 1,100,50,-51,1,1 };
    REQUIRE(find_even_index (numbers) == 1);

    numbers = { 1,2,3,4,5,6 };
    REQUIRE(find_even_index (numbers) == -1);

    numbers = { 20,10,30,10,10,15,35 };
    REQUIRE(find_even_index (numbers) == 3);

    numbers = { 20,10,-80,10,10,15,35 };
    REQUIRE(find_even_index (numbers) == 0);
       
    numbers = { 10,-80,10,10,15,35,20 };
    REQUIRE(find_even_index (numbers) == 6);

    numbers = {0,0,0,0,0};
    REQUIRE(find_even_index (numbers) == 0);

    numbers = {-1,-2,-3,-4,-3,-2,-1 };
    REQUIRE(find_even_index (numbers) == 3);
}

TEST_CASE("Roman Numerals"){
    REQUIRE(ROMsolution("I") == 1);
    REQUIRE(ROMsolution("IV") == 4);
    REQUIRE(ROMsolution("MMVIII") == 2008);
    REQUIRE(ROMsolution("MDCLXVI") == 1666);
}

TEST_CASE("are they the same"){
    std::vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    bool ans = Same::comp(a,b);
    REQUIRE(ans == true);
    a = {121, 144, 19, 161, 19, 144, 19, 11};
    b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
    ans = Same::comp(a,b);
    REQUIRE(ans == false);
}


TEST_CASE("get middle"){
    string str = get_middle("testing");
    REQUIRE( str == "t" );
    str = get_middle("test");
    REQUIRE( str == "es" );
}

TEST_CASE("partline_Tests")
{
    std::vector<std::string> s = {"cdIw", "tzIy", "xDu", "rThG"};
    std::vector<std::pair <std::string, std::string>> sol = {{"cdIw", "tzIy xDu rThG"}, {"cdIw tzIy", "xDu rThG"}, {"cdIw tzIy xDu", "rThG"}};
    std::vector<std::pair <std::string, std::string>> ans = PartList::partlist(s);

    for(int i = 0; i < sol.size();i++){
        REQUIRE(std::get<0>(ans[i]) == std::get<0>(sol[i]));
        REQUIRE(std::get<1>(ans[i]) == std::get<1>(sol[i]));
    }

    s = {"I", "wish", "I", "hadn't", "come"};
    sol = {{"I", "wish I hadn't come"}, {"I wish", "I hadn't come"}, {"I wish I", "hadn't come"}, {"I wish I hadn't", "come"}};
    ans = PartList::partlist(s);
    for(int i = 0; i < sol.size();i++){
        REQUIRE(std::get<0>(ans[i]) == std::get<0>(sol[i]));
        REQUIRE(std::get<1>(ans[i]) == std::get<1>(sol[i]));
    }

    s = {"vJQ", "anj", "mQDq", "sOZ"};
    sol = {{"vJQ", "anj mQDq sOZ"}, {"vJQ anj", "mQDq sOZ"}, {"vJQ anj mQDq", "sOZ"}};
    ans = PartList::partlist(s);
    for(int i = 0; i < sol.size();i++){
        REQUIRE(std::get<0>(ans[i]) == std::get<0>(sol[i]));
        REQUIRE(std::get<1>(ans[i]) == std::get<1>(sol[i]));
    }
};
#endif