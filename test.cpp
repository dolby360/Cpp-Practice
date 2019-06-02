#include "include/catch.hpp"
#include <utility>
#include "Level_7/PartList.hpp"
#include "Level_7/get_middle.hpp"
#include "Level_6/theSame.hpp"


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