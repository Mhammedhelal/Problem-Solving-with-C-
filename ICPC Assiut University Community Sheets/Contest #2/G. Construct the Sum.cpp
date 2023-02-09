#include <iostream>
using namespace std;
long long arr[1000005];
int main()
{
	int testcase;
	cin >> testcase;
	long long counter = 0;
	while (testcase--)
	{
		long long n, s;
		cin >> n >> s;
		if (n * (n + 1) / 2 < s)
			cout << -1;
		else
		{
			long long sum = 0;
			for (long long i = n; i >= 1; i--)
			{
				if (sum + i <= s)
				{
					sum += i;
					arr[counter] = i;
					counter++;
				}
				if (sum == s)
					break;
			}
			for (int x = 0; x < counter; x++)
			{
				cout << arr[x] << " ";
			}
		}
		cout << endl;
		counter = 0;
	}

	return 0;
}
