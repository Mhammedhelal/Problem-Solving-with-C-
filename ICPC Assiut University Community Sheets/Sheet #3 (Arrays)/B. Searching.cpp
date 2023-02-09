#include <iostream>
using namespace std;
int main()
{
	int n;
	long long x, sum = 0;
	bool exist = false;
	cin >> n;
	long long *a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> x;
	for (int j = 0; j < n; j++)
	{
		if (a[j] == x)
		{
			exist = true;
			cout << j;
			break;
		}
	}
	if (exist == false)
		cout << -1;

	return 0;
}
