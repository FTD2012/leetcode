
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"

#include <iostream>
#include "784.letter-case-permutation.h"

TEST_CASE("784.letter-case-permutation", "784.letter-case-permutation")
{
    Solution s;

    REQUIRE( (s.letterCasePermutation("C") == std::vector<std::string>{"c", "C"}) );

    REQUIRE( (s.letterCasePermutation("a1b2") == std::vector<std::string>{"a1b2", "a1B2", "A1b2", "A1B2"}) );

    REQUIRE( (s.letterCasePermutation("3z4") == std::vector<std::string>{"3z4", "3Z4"}) );

    REQUIRE( (s.letterCasePermutation("12345") == std::vector<std::string>{"12345"}) );

}