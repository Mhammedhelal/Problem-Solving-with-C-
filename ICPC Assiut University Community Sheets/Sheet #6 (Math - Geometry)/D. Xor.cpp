#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	long long a, b, q;
	cin >> a >> b >> q;
	long long result = q % 3;
	switch (result)
	{
	case 1:cout << a; break;
	case 2:cout << b; break;
	default:cout << (a ^ b); break;
	}

	return 0;
}
