#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double Pi = 3.141592653;
	double r;
	cin >> r;
	double area = Pi * pow(r, 2);
	cout << setprecision(11) << area;

	return 0;
}
