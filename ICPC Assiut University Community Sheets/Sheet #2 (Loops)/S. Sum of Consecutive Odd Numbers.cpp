#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x, y, sum = 0;
		cin >> x >> y;
		for (int i = min(x, y) + 1; i < max(x, y); i++)
		{
			if (i % 2 != 0)
				sum += i;
		}
		cout << sum;
		cout << endl;
	}

	return 0;
}
