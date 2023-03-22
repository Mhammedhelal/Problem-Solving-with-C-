#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long GCD(long long x, long long y);
long long LCM(long long x, long long y);
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << GCD(a, b) << " " << LCM(a, b);

	return 0;
}

long long GCD(long long x, long long y)
{
	while (y != 0) {
		long long temp = x;
		x = y;
		y = temp % x;
	}
	return x;
}
long long LCM(long long x, long long y)
{
	return x * y / GCD(x, y);
}
