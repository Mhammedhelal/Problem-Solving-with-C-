#include <iostream>
using namespace std;

bool arePermutationd(int a[], int b[], int n, int m);
int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	arePermutationd(a, b, n, n) ? cout << "yes" : cout << "no";

	return 0;
}

bool arePermutationd(int a[], int b[], int n, int m)
{

	int sum1 = 0, sum2 = 0, mul1 = 1, mul2 = 1;
	for (int i = 0; i < n; i++)
	{
		sum1 += a[i];
		mul1 *= a[i];
	}
	for (int i = 0; i < m; i++)
	{
		sum2 += b[i];
		mul2 *= b[i];
	}
	return ((sum1 == sum2) && (mul1 == mul2));
}
