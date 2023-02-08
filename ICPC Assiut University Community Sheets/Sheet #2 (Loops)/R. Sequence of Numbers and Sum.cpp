#include <iostream>
using namespace std;

int main()
{
	int n, m;
	do
	{
		cin >> n >> m;
		if (n <= 0 || m <= 0)
			return 0;
		int sum = 0;
		for (int i = min(n, m); i <= max(n, m); i++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum;
		cout << endl;
	} while (n > 0 & m > 0); // while(!(n <= 0  || m <= 0))

	return 0;
}
