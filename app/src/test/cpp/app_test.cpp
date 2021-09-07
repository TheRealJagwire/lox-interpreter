#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_SUPER_FAST_ASSERTS
#include "doctest.h"
#include "app.h"

SCENARIO("Running Lox Scanner")
{
    GIVEN("A Lox scanner") {
        WHEN("we instantiate the scanner with more than 1 argument") {
            Lox::Application app(2, nullptr);
            THEN("the scanner should return an error.") {
                REQUIRE(app.Run() != 0);
            }
        }
    }     
}