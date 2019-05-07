
project(9.palindrome-number)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(9.palindrome-number ${catchhpp} ${source_file})