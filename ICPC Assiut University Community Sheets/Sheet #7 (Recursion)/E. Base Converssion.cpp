#include <iostream>
using namespace std;

void print(int num) 
{
	if (num == 0) {
		return;
	}
	print(num / 2);
	cout << num % 2;

}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		print(n);
		cout << endl;
	}

	return 0;
}
