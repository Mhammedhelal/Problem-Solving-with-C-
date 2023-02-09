#include <iostream>
using namespace std;

int main()
{
	int n, m, x, flag = 0;
	cin >> n >> m;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (x == arr[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
	(flag) ? cout << "will not take number" : cout << "will take number";

	return 0;
}
