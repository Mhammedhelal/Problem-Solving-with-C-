#include <iostream>
#include <string>
using namespace std;

void printdigits(string s);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string n;
		cin >> n;
		printdigits(n);
		cout << endl;
	}

	return 0;
}

void printdigits(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
}
