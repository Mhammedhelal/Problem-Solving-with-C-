#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long sum(long long n)
{
	return n * (n + 1) / 2;
}
int main()
{
	int a, b, x;
	cin >> a >> b >> x;
	cout << (sum(max(a, b) / x) * x) - (sum((min(a, b) - 1) / x) * x);


	return 0;
}
