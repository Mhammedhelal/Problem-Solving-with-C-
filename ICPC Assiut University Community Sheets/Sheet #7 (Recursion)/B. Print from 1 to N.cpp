#include <iostream>
using namespace std;

void print(int x, int n)
{
	if (x <= n)
	{
		cout << x << endl;
		print(x + 1, n);
	}
}
int main()
{

	int num;
	cin >> num;
	print(1, num);

	return 0;
}
