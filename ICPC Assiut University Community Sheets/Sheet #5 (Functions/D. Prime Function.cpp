#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	if (n == 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	int factor = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		(isPrime(n)) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
