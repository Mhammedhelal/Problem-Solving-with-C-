#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		if (size % 2 != 0)
		{
			cout << -1 << endl;
		}
		else
		{
			int even = 0, odd = 0;
			for (int i = 0; i < size; i++)
			{
				if (arr[i] % 2 == 0)
				{
					even += 1;
				}
				else
				{
					odd += 1;
				}
			}
			if (even == odd)
			{
				cout << 0 << endl;
			}
			else if (even > odd)
			{
				cout << (even - odd) / 2 << endl;
			}
			else
			{
				cout << (odd - even) / 2 << endl;
			}
		}
	}

	return 0;
}
