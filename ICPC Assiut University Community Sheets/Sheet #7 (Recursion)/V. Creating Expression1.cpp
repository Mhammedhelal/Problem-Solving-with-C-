#include <iostream>
using namespace std;

long long result;
long long arr[21];
bool check(long long sum, long index, long long size)
{
	if (index == size)
	{
		return sum == result;
	}
	bool route1 = check(sum + arr[index], index + 1, size);
	bool route2 = check(sum - arr[index], index + 1, size);
	return route1 || route2;
}

int main()
{
	long long size;
	cin >> size >> result;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	if (check(arr[0], 1, size))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
