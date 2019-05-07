
project(784.letter-case-permutation)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(784.letter-case-permutation ${catchhpp} ${source_file})