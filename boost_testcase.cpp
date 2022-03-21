#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp> //single-header
#include "math.h" //being tested


BOOST_AUTO_TEST_CASE(my_boost_test)
{
    int expectedValue = 10;
	
    int actualValue = Math::sum(5,5);
	
	BOOST_CHECK(expectedValue == actualValue);
}
