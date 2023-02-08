#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long *arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max;

	return 0;
}
