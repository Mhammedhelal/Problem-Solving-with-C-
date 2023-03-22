#include <iostream>
using namespace std;
#include <math.h>

long long eq(int x, int n)
{
	long long s = 0;
	for (int i = 2; i <= n; i += 2)
	{
		s += pow(x, i);
	}
	return s;
}

int main()
{
	int x, n;
	cin >> x >> n;
	cout << eq(x, n);

	return 0;
}
