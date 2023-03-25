#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct point
{
	double x;
	double y;
};
double maximum(double a, double b, double c, double d)
{
	return max(max(max(a, b), c), d);
}
double minimum(double a, double b, double c, double d)
{
	return min(min(min(a, b), c), d);
}
int main()
{
	point a, b, c, d;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
	int n;
	cin >> n;
	point* arr = new point[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i].x <= maximum(a.x, b.x, c.x, d.x) && arr[i].y <= maximum(a.y, b.y, c.y, d.y) && arr[i].x >= minimum(a.x, b.x, c.x, d.x) && arr[i].y >= minimum(a.y, b.y, c.y, d.y))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
