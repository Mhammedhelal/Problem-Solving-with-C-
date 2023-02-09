#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long l, r;
		long long ma, mi;
		cin >> l >> r;
		ma = max(l, r);
		mi = min(l, r);
		mi--;
		long long result1 = mi * (mi + 1) / 2;
		long long result2 = ma * (ma + 1) / 2;
		cout << result2 - result1 << endl;
	}

	return 0;
}
