#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, res;
	int num = 0;
	getline(cin, s);
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] != 32 & s[i] != '!' && s[i] != '.' && s[i] != '?' && s[i] != ',')
		{
			res += s[i];
		}
		if ((s[i] == 32 || s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ',' || i == s.size() - 1) && res.size() != 0)
		{
			num++;
			res = "";
		}
	}
	cout << num << endl;

	return 0;
}
