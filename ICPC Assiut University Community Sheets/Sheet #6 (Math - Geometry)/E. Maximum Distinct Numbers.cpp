#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int maxDistinct(long long n);
int main()
{
	long long n;
	cin >> n;
	cout << maxDistinct(n);

	return 0;
}

int maxDistinct(long long n)
{
	long long sum = 0;
	int i = 1, count = -1;
	while (sum <= n)
	{
		sum += i;
		i++;
		count++;
	}
	return count;
}
