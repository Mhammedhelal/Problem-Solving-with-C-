#include <iostream>
using namespace std;

int main()
{
	int n, a, b, x, mod, sum, sumall = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		x = i;
		sum = 0;
		while (x != 0)
		{
			mod = x % 10;
			sum += mod;
			x /= 10;
		}
		if (sum >= min(a, b) && sum <= max(a, b))
			sumall += i;
	}
	cout << sumall;

	return 0;
}
