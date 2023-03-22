#include <iostream>
using namespace std;

void multiprint(int n, char c);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		char c;
		cin >> n >> c;
		multiprint(n, c);
		cout << endl;
	}

	return 0;
}

void multiprint(int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		cout << c << " ";
	}
}
