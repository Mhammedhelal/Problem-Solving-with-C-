#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int n2 = n;
	string s;
	cin >> s;
	string t;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == s[i + 1])
		{
			n2--;
		}
	}
	cout << n2;

	return 0;
}
