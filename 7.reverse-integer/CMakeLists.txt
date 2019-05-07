
project(7.reverse-integer)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(7.reverse-integer ${catchhpp} ${source_file})