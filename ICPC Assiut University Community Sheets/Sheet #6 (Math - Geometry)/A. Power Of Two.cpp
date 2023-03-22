#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	double result = log2(n) / log2(2);

	if ((result - (long long)result) != 0)
	{
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}

	return 0;
}
