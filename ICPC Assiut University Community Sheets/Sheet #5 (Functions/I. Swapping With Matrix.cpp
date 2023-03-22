#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int n, x, y;
	cin >> n >> x >> y;

	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < n; i++)
		swap(arr[x - 1][i], arr[y - 1][i]);
	for (int i = 0; i < n; i++)
		swap(arr[i][x - 1], arr[i][y - 1]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
