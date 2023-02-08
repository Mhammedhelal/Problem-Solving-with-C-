#include <iostream>
using namespace std;

bool isPrime(int x)
{
	if (x == 1)
		return false;
	else
	{
		int factors = 1;
		for (int i = 2; i <= x; i++)
		{
			if (x % i == 0)
				factors++;
		}
		if (factors == 2)
			return true;
		else
			return false;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i))
			cout << i << " ";
	}

	return 0;
}
