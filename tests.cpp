#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Divisibility Base Cases") {
  CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
}
