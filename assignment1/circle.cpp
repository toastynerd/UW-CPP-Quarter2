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

Circle& Circle::operator + (Circle& c2)
{
	Circle tmp_circle(mRadius + c2.mRadius, mXCoord, mYCoord, mName);
	return tmp_circle;
}

void Circle::operator << (std::ostream& os)
{

}