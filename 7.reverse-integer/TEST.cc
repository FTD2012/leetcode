
#define CATCH_CONFIG_MAIN
#include "../Catch/single_include/catch2/catch.hpp"

#include <iostream>
#include "7.reverse-integer.h"

TEST_CASE("7.reverse-interger", "reverse-interger")
{
    Solution s;

    REQUIRE( (s.reverse(123) == 321) );

    REQUIRE( (s.reverse(1534236469) == 0) );

    REQUIRE( (s.reverse(-321) == -123) );

    REQUIRE( (s.reverse(-2147483648) == 0) );
}