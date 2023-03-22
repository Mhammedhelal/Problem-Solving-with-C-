#include <iostream>
using namespace std;

void pyramid(int x, int n)
{
	if (x <= n)
	{
		for (int i = 1; i <= n - x; i++)
			cout << " ";
		for (int j = 1; j <= (2 * x) - 1; j++)
			cout << "*";
		cout << endl;
		pyramid(x + 1, n);
	}
}

int main()
{
	int n;
	cin >> n;
	pyramid(1, n);

	return 0;
}
