
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"

#include <vector>
#include <iostream>
#include "491.increasing-subsequences.h"

TEST_CASE("491.increasing-subsequences", "491.increasing-subsequences")
{
    Solution s;

    std::vector<int> test = {4, 6, 7, 7, 8};
    REQUIRE( (s.findSubsequences(test) == std::vector<std::vector<int> >{{4,6},{4,6,7},{4,6,7,7},{4,7},{4,7,7},{6,7},{6,7,7},{7,7}}) );
}