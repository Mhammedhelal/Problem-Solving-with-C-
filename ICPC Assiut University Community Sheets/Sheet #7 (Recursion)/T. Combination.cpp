#include <iostream>
using namespace std;

long long fac(long long n, long long r)
{
	long long res = 1;
	long long temp = 2;
	for (int i = r + 1; i <= n; i++)
	{
		res *= i;
		if (temp <= n - r && res % temp == 0)
		{
			res /= temp;
			temp++;
		}
	}
	return res;
}
int main()
{
	int n, r;
	cin >> n >> r;
	if (n >= r)
		cout << fac(n, r);
	else 
		cout << 0;

	return 0;
}
