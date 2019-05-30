#include "include/catch.hpp"


#include "Level_7/get_middle.hpp"

TEST_CASE("get middle"){
    string str = get_middle("testing");
    REQUIRE( str == "t" );
    str = get_middle("test");
    REQUIRE( str == "es" );
}