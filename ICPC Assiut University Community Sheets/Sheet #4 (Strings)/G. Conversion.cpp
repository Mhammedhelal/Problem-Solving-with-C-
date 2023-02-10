#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == ',')
			cout << " ";
		else if (s[i] >= 97 && s[i] <= 122)	//a-z:97-122
			cout << char(s[i] - 32);
		else if (s[i] >= 65 && s[i] <= 90)	//A-Z:65-90
			cout << char(s[i] + 32);
		else
			cout << char(s[i]);
	}
	
	return 0;
}
