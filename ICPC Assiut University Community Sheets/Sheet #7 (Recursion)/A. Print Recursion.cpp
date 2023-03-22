#include <iostream>
using namespace std;

void print(int n)
{
	if (n > 0)
	{
		cout << "I love Recursion" << endl;
		print(n - 1);
	}
	return;
}

int main()
{
	int num;
	cin >> num;
	print(num);

	return 0;
}
