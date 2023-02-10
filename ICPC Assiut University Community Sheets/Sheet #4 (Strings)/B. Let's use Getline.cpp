#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == '\\')
		{
			break;
		}
		cout << s[i];
	}
	return 0;
}
