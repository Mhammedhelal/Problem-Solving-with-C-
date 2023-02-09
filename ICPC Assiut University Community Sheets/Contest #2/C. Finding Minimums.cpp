#include <iostream>
using namespace std;

long long array_minimum(long long arr[], int start, int end);
int main()
{
	int n, k;
	cin >> n >> k;
	long long *numbers = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if ((i + 1) % k == 0)
		{
			cout << array_minimum(numbers, j, i + 1) << " ";
			j += k;
		}
	}
	if (n % k != 0)
		cout << array_minimum(numbers, j, n) << " ";

	return 0;
}

long long array_minimum(long long arr[], int start, int end)
{
	long long minimum = arr[start];
	for (int i = start + 1; i < end; i++)
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}
	}
	return minimum;
}
