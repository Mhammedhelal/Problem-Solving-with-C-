#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long factorial(long long n);
long long permutation(long long n, long long r);
long long combination(long long n, long long r);
int main()
{
	int n, r;
	cin >> n >> r;
	cout << combination(n, r) << " " << permutation(n, r);

	return 0;
}

long long factorial(long long n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}
long long permutation(long long n, long long r)
{
	return factorial(n) / factorial(n - r);
}
long long combination(long long n, long long r)
{
	return permutation(n, r) / factorial(r);
}
