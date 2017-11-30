#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE module1
#include <boost/test/included/unit_test.hpp>
#include "Base_Calculation.h"

BOOST_AUTO_TEST_SUITE(universe_suite)

    BOOST_AUTO_TEST_CASE(base10)
    {
        BOOST_CHECK(answer<int> == 50);
    }

    BOOST_AUTO_TEST_CASE(base13)
    {
        BOOST_CHECK(answer<Base<13>> == "42");
    }

BOOST_AUTO_TEST_SUITE_END()

