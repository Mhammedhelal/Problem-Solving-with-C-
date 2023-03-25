#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct point
{
	double x;
	double y;
};
double radius(point a, point b)
{
	double diameter = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	return diameter / 2;
}
bool isIntersect(point a, point b, point c, point d)
{
	double r1 = radius(a, b), r2 = radius(c, d);
	point c1, c2;
	c1.x = (a.x + b.x) / 2;
	c1.y = (a.y + b.y) / 2;
	c2.x = (c.x + d.x) / 2;
	c2.y = (c.y + d.y) / 2;
	double di = sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));

	return (di <= r1 + r2);
}
int main()
{
	point a, b, c, d;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
	(isIntersect(a, b, c, d)) ? cout << "YES" : cout << "NO";

	return 0;
}
