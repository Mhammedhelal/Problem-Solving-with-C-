#include <iostream>
using namespace std;

long long sum(int arr[], int size, int index, long long summation)
{
	if (index == size)
		return summation;
	summation += arr[index];
	return sum(arr, size, index + 1, summation);
}
long long sum(int arr[], int size, int m)
{
	return sum(arr, size, size - m, 0);
}
int main()
{
	int size, m;
	cin >> size >> m;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << sum(arr, size, m);

	return 0;
}
