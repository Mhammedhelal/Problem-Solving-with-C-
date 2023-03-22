#include <iostream>
using namespace std;

long long sum(int arr[], int size)
{
	if (size == 0)
		return 0;
	return arr[--size] + sum(arr, size);
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
	cout << sum(arr, size);

	return 0;
}
