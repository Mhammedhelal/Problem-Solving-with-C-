#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x == 1)
		cout << "NO";
	else
	{
		int factors = 1;
		for (int i = 2; i <= x; i++)
		{
			if (x % i == 0)
				factors++;
		}
		(factors == 2) ? cout << "YES" : cout << "NO";
	}

	return 0;
}
