#include <iostream>
#include <math.h>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	(b * log(a) > d * log(c)) ? cout << "YES" : cout << "NO";

	return 0;
}
