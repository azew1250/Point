#include "Point.h"

int main()
{
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	Point point1(x1, y1);
	Point point2(x2, y2);
	Point point3(x3, y3);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "=";

	point1 = point1.add(point2).subtract(point3);

	cout << point1.toString() << endl;
	system("pause");

}