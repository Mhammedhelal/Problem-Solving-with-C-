#include <iostream>
#include <math.h>
using namespace std;

struct point
{
	float x;
	float y;
};
struct line
{
	point start;
	point end;
};
bool isParallel(line l1, line l2)
{
	double res1 = (l1.end.x - l1.start.x) * (l2.end.y - l2.start.y);
	double res2 = (l1.end.y - l1.start.y) * (l2.end.x - l2.start.x);
	return res1 == res2;
}

int main()
{
	line l1, l2;
	cin >> l1.start.x >> l1.start.y >> l1.end.x >> l1.end.y;
	cin >> l2.start.x >> l2.start.y >> l2.end.x >> l2.end.y;
	(isParallel(l1, l2)) ? cout << "YES" : cout << "NO";

	return 0;
}
