
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"

#include "2.add-two-numbers.h"

#include <iostream>
#include <chrono>


TEST_CASE("2.add-two-numbers", "2.add-two-numbers")
{

    Solution s;

    REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(9), Solution::buildList(9))) == 18) );
    REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(9), Solution::buildList(91))) == 100) );
    REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(342), Solution::buildList(465))) == 807) );
    REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(0), Solution::buildList(0))) == 0) );
    REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(9), Solution::buildList(9999999991))) == 10000000000) );
    // REQUIRE( (Solution::buildVal(s.addTwoNumbers(Solution::buildList(1000000000000000000000000000001), Solution::buildList(465))) == 1000000000000000000000000000466) );

}