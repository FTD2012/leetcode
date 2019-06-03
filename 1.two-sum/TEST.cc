
#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch2/catch.hpp"

#ifdef TWO_SUM_HASH
#   include "1.two-sum-hashmap.h"
#else
#   include "1.two-sum.h"
#endif

#include <iostream>
#include <chrono>

void marcoDefinition()
{
#ifdef TWO_SUM_HASH
    std::cout << "Using 1.two-sum-hashmap.h" << std::endl;
#else
    std::cout << "Using 1.two-sum.h" << std::endl;
#endif
}

TEST_CASE("Two Sum", "twoSum")
{
    marcoDefinition();

    Solution s;

    std::vector<int> v1{2, 7, 11, 15};
    REQUIRE( (s.twoSum(v1, 9) == std::vector<int>{0, 1}) );

    std::vector<int> v2{0, 4, 3, 0};
    REQUIRE( (s.twoSum(v2, 0) == std::vector<int>{0, 3}) );

    std::vector<int> v3{-3, 4, 3, 90};
    REQUIRE( (s.twoSum(v3, 0) == std::vector<int>{0, 2}) );
}