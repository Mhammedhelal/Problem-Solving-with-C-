#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	if (c >= '0' && c <= '9')
		cout << "IS DIGIT";

	if (c >= 'A' && c <= 'Z')
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL";
	}

	if (c >= 'a' && c <= 'z')
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL";
	}

	return 0;
}
