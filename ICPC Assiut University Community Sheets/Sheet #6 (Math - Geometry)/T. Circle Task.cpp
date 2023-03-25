#include <iostream>
#include <math.h>
using namespace std;

struct point
{
	float x;
	float y;
};
bool belong(point n, point center, float r)
{

	return (sqrt(pow(center.x - n.x, 2) + pow(center.y - n.y, 2)) <= r);
}
int main()
{
	point center;
	float r;
	int n;
	cin >> center.x >> center.y >> r >> n;
	point* arr = new point[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}
	for (int i = 0; i < n; i++)
	{
		(belong(arr[i], center, r)) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
