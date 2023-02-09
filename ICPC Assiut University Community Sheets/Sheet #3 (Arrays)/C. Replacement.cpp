#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long *a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] > 0)
		{
			cout << 1 << " ";
		}
		if (a[j] < 0)
		{
			cout << 2 << " ";
		}
		if (a[j] == 0)
			cout << 0 << " ";
	}

	return 0;
}
