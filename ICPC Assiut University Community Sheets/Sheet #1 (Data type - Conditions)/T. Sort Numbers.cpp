#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
{
	int min_index;
	for (int i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[min_index], arr[i]);
	}
}
int main()
{
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	int copy[3];
	for (int i = 0; i < 3; i++)
	{
		copy[i] = arr[i];
	}
	sortArray(copy, 3);

	for (int i = 0; i < 3; i++)
		cout << copy[i] << endl;
	cout << endl;
	for (int i = 0; i < 3; i++)
		cout << arr[i] << endl;

	return 0;
}
