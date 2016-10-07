#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../include/print_hello_world.h"

int incr(int a)
{
    return ++a;
}

TEST_CASE( "Increments are computed", "[increment]" ) {
    REQUIRE( incr(1) == 2 );
    REQUIRE( incr(2) == 3 );
    REQUIRE( incr(3) == 4 );
    REQUIRE( incr(10) == 11 );
}
