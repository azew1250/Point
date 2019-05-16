#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(int newX, int newY)
{
	x = newX;
	y = newY;
}

Point Point::add(const Point &point)
{
	int x1, y1;
	x1 = x + point.x;
	y1 = y + point.y;
	return Point(x1,y1);
}

Point Point::subtract(const Point &point)
{
	int x1, y1;
	x1 = x - point.x;
	y1 = y - point.y;
	return Point(x1,y1);
}

string Point::toString()
{
	stringstream x1, y1;
	x1 << x;
	y1 << y;
	return "(" + x1.str() + "," + y1.str() + ")";
}
