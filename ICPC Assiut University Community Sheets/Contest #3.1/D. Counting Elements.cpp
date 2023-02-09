#include <iostream>
using namespace std;

bool isExist(int arr[], int size, int x);
int main()
{
	int size, count = 0;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (isExist(arr, size, arr[i] + 1))
		{
			count++;
		}
	}
	cout << count;

	return 0;
}
bool isExist(int arr[], int size, int x)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == x)
		{
			return true;
		}
	}
	return false;
}
