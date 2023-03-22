#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long even_sum(long long x)
{
	return x * (x + 1);
}
long long odd_sum(long long x)
{
	return pow((x + 1) / 2, 2);
}
int main()
{
	int a, b;
	cin >> a >> b;
	long long evenRes = even_sum(max(a, b) / 2) - even_sum((min(a, b) - 1) / 2);
	long long oddRes = odd_sum(max(a, b)) - odd_sum(min(a, b) - 1);
	cout << evenRes + oddRes << endl;
	cout << evenRes << endl;
	cout << oddRes << endl;

	return 0;
}
