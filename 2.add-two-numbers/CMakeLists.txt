
project(1.two-sum)

file (GLOB source_file 
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cc
)

# ADD_DEFINITIONS(-DTWO_SUM_HASH)

add_executable(2.add-two-numbers ${catchhpp} ${source_file})