
project(CPPTest)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(CPPTest ${catchhpp} ${source_file})