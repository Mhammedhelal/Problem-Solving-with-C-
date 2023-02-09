#include <iostream>
using namespace std;

void reverseArray(long long arr[], int size)
{
	int j = size - 1, i = 0;
	if (size % 2 == 0)
	{
		while (j != i - 1)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	else
	{
		while (j != i)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	long long *a = new long long[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long *b = new long long[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	reverseArray(b, n);
	bool isPalindrome = true;
	for (int i = 0; i < n; i++)
	{
		if (b[i] != a[i])
		{
			isPalindrome = false;
			break;
		}
	}
	(isPalindrome) ? cout << "YES" : cout << "NO";

	return 0;
}
