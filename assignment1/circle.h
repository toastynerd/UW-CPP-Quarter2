//Tyler Morgan
//May-3-2013
//UW online C++ course qtr 2
//circle.cpp
#include <cstddef> //included for NULL to work with gcc
#include <iostream>
class Circle
{
public:

	Circle( int radius,
		int xCoord = 0, int yCoord = 0,
		const char * name = NULL );
	~Circle();

	int getRadius();

	const Circle operator+(Circle&);
	friend std::ostream& operator<<(std::ostream&, const Circle&);
	const Circle* operator++();
	const Circle operator++(int);

	private:
	int mXCoord;
	int mYCoord;
	int mRadius;
	const char * mName; // this stores the name of the circle
};
