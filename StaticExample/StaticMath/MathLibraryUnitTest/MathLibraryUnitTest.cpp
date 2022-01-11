#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp> //single-header
#include "MathLibrary.h" // project being tested

BOOST_AUTO_TEST_CASE(my_boost_test)
{
    double a = 7.4;
    int b = 99;
    BOOST_CHECK(a + b == MathLibrary::Arithmetic::Add(a,b));
}