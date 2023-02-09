#include <iostream>
using namespace std;

void sortArray(long long arr[], int size)
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
	int n;
	cin >> n;
	long long *a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sortArray(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}
