#include <iostream>
#include <math.h>
using namespace std;

bool isLucky(int n)
{
	while (n != 0)
	{
		if (!(n % 10 == 4 || n % 10 == 7))
			return false;
		n /= 10;
	}
	return true;
}
int main()
{
	int a, b;
	cin >> a >> b;
	bool flag = false;
	for (int i = min(a, b); i <= max(a, b); i++)
	{
		if (isLucky(i))
		{
			cout << i << " ";
			flag = true;
		}
	}
	if (!flag)
		cout << -1;

	return 0;
}
