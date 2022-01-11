#define BOOST_TEST_MODULE MyDLLTest
#include <iostream>
#include <boost/test/included/unit_test.hpp> //single-header
#include "MathLibrary.h" // project being tested

BOOST_AUTO_TEST_CASE(my_boost_test)
{
    // Initialize a Fibonacci relation sequence.
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;
    BOOST_CHECK(92 == fibonacci_index());
}