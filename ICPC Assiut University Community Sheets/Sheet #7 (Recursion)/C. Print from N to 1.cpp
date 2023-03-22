#include <iostream>
using namespace std;

void printtoN(int n)
{
	if (n != 0)
	{
		cout << n;
		if (n != 1)
			cout << " ";
		printtoN(n - 1);
	}
	return;
}

int main()
{
	int num;
	cin >> num;
	printtoN(num);

	return 0;
}
