#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (fmod(n, i) == 0)
		{
			sum += i;
			if (i != sqrt(n))
				sum += n / i;
		}
	}
	cout << sum;

	return 0;
}
