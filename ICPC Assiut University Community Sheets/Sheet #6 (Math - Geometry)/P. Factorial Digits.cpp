#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	double n;
	cin >> n;
	double digits = 0;
	for (int i = 2; i <= n; i++)
	{
		digits += log10(i);
	}
	cout << "Number of digits of " << n << "! is " << (int)digits + 1;
	
	return 0;
}

