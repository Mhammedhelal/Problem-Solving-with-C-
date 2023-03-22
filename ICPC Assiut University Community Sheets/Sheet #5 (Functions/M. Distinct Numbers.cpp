#include <iostream>
#include <algorithm>
using namespace std;

int distinctNumber(int arr[], int size) 
{
	int count = 1;
	for (int i = 1; i < size; i++) 
	{
		if (arr[i] != arr[i - 1])
			count++;
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 0;
		return 0;
	}
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << distinctNumber(arr, n);

	return 0;
}
