#include <iostream>
using namespace std;

int main()
{
	int n, main=0,sec=0;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				main += arr[i][j];
			}
			if (i + j == n - 1)
			{
				sec += arr[i][j];
			}
		}
	}
	cout << abs(main - sec);

	return 0;
}
