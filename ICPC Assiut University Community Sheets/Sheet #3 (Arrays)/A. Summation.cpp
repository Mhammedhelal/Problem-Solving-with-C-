#include <iostream>
using namespace std;
int main()
{
	int n;
	long long sum = 0;
	cin >> n;
	long long *a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	cout << abs(sum);

	return 0;
}
