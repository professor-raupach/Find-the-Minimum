cmake_minimum_required(VERSION 3.20)
project(FindMinimum)

set(CMAKE_CXX_STANDARD 14)

add_executable(FindMinimum driver.cpp)
add_executable(TestFindMinimum test/catch.hpp test/test_find_minimum.cpp)