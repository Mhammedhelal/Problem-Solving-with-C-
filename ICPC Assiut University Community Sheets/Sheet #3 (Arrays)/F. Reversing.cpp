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
    for (int j = n - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }


	return 0;
}
