
#define CATCH_CONFIG_MAIN
#include "../Catch/single_include/catch2/catch.hpp"

#include <iostream>
#include "9.palindrome-number.h"

TEST_CASE("9.palindrome-number", "9.palindrome-number")
{
    Solution s;

    REQUIRE( (s.isPalindrome(121) == true) );

    REQUIRE( (s.isPalindrome(-121) == false) );

    REQUIRE( (s.isPalindrome(10) == false) );

}