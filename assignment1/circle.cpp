//Tyler Morgan
//May-3-2013
//UW online C++ course qtr 2
//circle.cpp
#include "circle.h"	

Circle::Circle(int radius, int xCoord,int yCoord, const char *name)
	:mRadius(radius),
	mXCoord(xCoord),
	mYCoord(yCoord),
	mName(name)
{
	
}
Circle::~Circle()
{
	
}

int Circle::getRadius()
{
	return mRadius;
}

const Circle Circle::operator + (Circle& c2)
{
	return Circle(mRadius + c2.mRadius,mXCoord,mYCoord,mName);
}

std::ostream& operator<<(std::ostream& os, const Circle& circ)
{
	os << "Circle: " << circ.mName << " is located at: " << circ.mXCoord << "," << circ.mYCoord << " with a radius of " << circ.mRadius << std::endl;
}

const Circle* Circle::operator++()
{
	mRadius++;
	return this;
}

const Circle Circle::operator++(int)
{
	mRadius++;
	return Circle(mRadius, mXCoord, mYCoord, mName);
}