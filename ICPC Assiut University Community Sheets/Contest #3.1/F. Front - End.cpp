#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int x = 0, y = size - 1;
	if (size % 2 == 0)
	{
		while (y != x - 1)
		{
			cout << arr[x] << " " << arr[y] << " ";
			x++;
			y--;
		}
	}
	else
	{
		while (y != x)
		{
			cout << arr[x] << " " << arr[y] << " ";
			x++;
			y--;
		}
		cout << arr[x];
	}
	return 0;
}
