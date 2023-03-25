#include <iostream>
#include <math.h>
using namespace std;

struct point
{
	float x;
	float y;
};
bool isStraightLine(point a,point b,point c)
{
	return ((c.y - b.y) * (b.x - a.x) == (b.y - a.y) * (c.x - b.x));
}
int main()
{
	point a, b, c;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	(isStraightLine(a, b, c)) ? cout << "YES" : cout << "NO";

	return 0;
}
