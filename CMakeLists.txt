cmake_minimum_required(VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Catch/single_include)
set(catchhpp ${CMAKE_CURRENT_SOURCE_DIR}/Catch/single_include/catch2/catch.hpp)


# add_subdirectory(CPPTest)

# add_subdirectory(1.two-sum)
# add_subdirectory(7.reverse-integer)
# add_subdirectory(9.palindrome-number)
add_subdirectory(784.letter-case-permutation)