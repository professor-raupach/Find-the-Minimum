#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../findMinimum.cpp"

TEST_CASE("Should find the minimum in 1,2,3,4,5,6") {
    int list[] = {1,2,3,4,5,6};
    int min = findMinimum(list, 6);

    REQUIRE(min == 1);
}

TEST_CASE("Should find the minimum in 9, 8,7,6,5,4,3,2") {
    int list[] = {9,8,7,6,5,4,3,2};
    int min = findMinimum(list, 8);

    REQUIRE(min == 2);
}


TEST_CASE("Should find the minimum in 78,100,15,34,27,99,230,67") {
    int list[] = {78,100,15,34,27,99,230,67};
    int min = findMinimum(list, 8);

    REQUIRE(min == 15);
}

TEST_CASE("Should be able to find the minimum in a list of one") {
    int list[] = {42};
    int min = findMinimum(list, 1);

    REQUIRE(min == 42);
}
