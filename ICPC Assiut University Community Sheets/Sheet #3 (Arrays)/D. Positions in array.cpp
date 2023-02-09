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
        if (a[j] <= 10)
        {
            cout << "A[" << j << "] = " << a[j] << endl;
        }
    }

	return 0;
}
