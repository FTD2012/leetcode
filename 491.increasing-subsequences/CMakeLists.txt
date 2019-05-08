
project(491.increasing-subsequences)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

add_executable(491.increasing-subsequences ${catchhpp} ${source_file})