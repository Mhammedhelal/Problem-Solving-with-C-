#include <iostream>
using namespace std;

int breakNumber(long long x)
{
	int counter = 0;
	while (x % 2 == 0)
	{
		x /= 2;
		counter++;
	}
	return counter;
}
int main()
{
	int n;
	cin >> n;
	long long *arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int maximum = breakNumber(arr[0]);
	for (int i = 1; i < n; i++)
	{
		if (breakNumber(arr[i]) > maximum)
		{
			maximum = breakNumber(arr[i]);
		}
	}
	cout << maximum;

	return 0;
}
