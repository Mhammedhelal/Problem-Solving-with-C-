#include <iostream>
using namespace std;

void pyramid(int i, int n)
{
	if (i >= 1)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int k = 1; k <= (2 * i) - 1; k++)
			cout << "*";
		cout << endl;
		pyramid(i - 1, n);
	}
}

int main()
{
	int n;
	cin >> n;
	pyramid(n, n);

	return 0;
}
