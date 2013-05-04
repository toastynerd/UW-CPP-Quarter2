#include "TestHarness.h"
#include "../circle.h"		
#include <iostream>
#include <sstream>

// include the header file for the class you are testing.

// each test function should be small and test a single capability

// replace testName with the name of the particular test. Replace ClassName with
// the name of the class being tested
TEST(plus_operator,Circle)
{
	Circle circle1(5,0,0,"my_circle");
	Circle circle2(3,0,0,"my_circle2");
	Circle circle3 = circle1 + circle2;
	CHECK_EQUAL(8,circle3.getRadius());
}

TEST(output_operator,Circle)
{
	std::stringstream ss;
	Circle circ(1,0,0,"my_circle");
	ss << circ;
	CHECK_EQUAL(ss.str(), "Circle: my_circle is located at: 0,0 with a radius of 1\n")
}

TEST(increase_operator, Circle)
{
	Circle circ1(2,0,0,"circ1");
	Circle circ2(2,0,0,"circ2");
	Circle circ4(0,0,0,"circ4");

	Circle circ3 = circ1++;
	CHECK_EQUAL(3,circ3.getRadius());
	CHECK_EQUAL(2,circ2.getRadius());
}