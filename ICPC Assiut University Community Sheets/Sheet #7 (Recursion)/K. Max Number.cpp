#include <iostream>
using namespace std;

int max(int arr[], int size, int index, int maximum)
{
	if (index == size)
		return maximum;
	if (arr[index] > maximum)
		maximum = arr[index];
	return max(arr, size, index + 1, maximum);
}
int max(int arr[], int size)
{
	return max(arr, size, 0, arr[0]);
}
int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << max(arr, size);

	return 0;
}
