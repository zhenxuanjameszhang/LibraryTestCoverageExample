#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp> //single-header
#include "MathLibrary.h" // project being tested
#include <string>

BOOST_AUTO_TEST_CASE(my_boost_test)
{
    std::string expected_value = "Bill";

    // assume MyClass is defined in MyClass.h
    // and get_value() has public accessibility
    MathLibrary::Arithmetic ml;
    double a = 7.4;
    int b = 99;
    BOOST_CHECK(a + b == ml.Add(a,b));
}