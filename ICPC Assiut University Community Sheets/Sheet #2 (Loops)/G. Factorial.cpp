#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long fac = 1;
		for (long long i = 1; i <= n; i++)
		{
			fac *= i;
		}
		cout << fac << endl;
	}

	return 0;
}
