cmake_minimum_required(VERSION 3.12) # version can be different
project(mytests)
add_subdirectory(googletest) # add googletest subdirectory
include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>
add_executable(mytests  mytests.cpp) 
target_link_libraries(mytests PRIVATE gtest) 