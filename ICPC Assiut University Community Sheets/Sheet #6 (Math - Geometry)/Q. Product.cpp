#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int l, r, m;
	cin >> l >> r >> m;
	int ma = max(l, r), mi = min(l, r);
	long long product = 1;
	for (int i = mi; i <= ma; i++)
	{
		product *= i;
		product %= m;
	}
	cout << product;
	return 0;
}

