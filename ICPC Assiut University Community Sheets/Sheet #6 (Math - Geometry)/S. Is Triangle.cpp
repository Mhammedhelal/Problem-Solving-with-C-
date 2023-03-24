#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

bool isValid(double a, double b, double c)
{
	return (a + b > c && a + c > b && b + c > a);
}
int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if (isValid(a, b, c))
	{
		double sum = a + b + c;
		cout << "Valid\n" << fixed << setprecision(6) << sqrt((sum / 2) * (sum / 2 - a) * (sum / 2 - b) * (sum / 2 - c));
	}
	else
		cout << "Invalid";

	return 0;
}
