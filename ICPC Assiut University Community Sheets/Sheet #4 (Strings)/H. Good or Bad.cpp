#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		bool Good = false;
		for (int i = 0; i < s.size() - 2; i++)
		{
			if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
			{
				Good = true;
			}
		}
		(Good) ? cout << "Good\n" : cout << "Bad\n";
		
	}	
	return 0;
}
