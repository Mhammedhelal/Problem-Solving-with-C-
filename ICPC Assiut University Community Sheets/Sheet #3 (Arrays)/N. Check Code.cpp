#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	string code;
	cin >> code;
	if (a + b + 1 != code.size())
	{
		cout << "No" << endl;
		return 0;
	}
	if (code[a] != '-')
	{
		cout << "No" << endl;
		return 0;
	}
	int counter = 0;
	for (int i = 0; i < code.size(); i++)
	{
		if (code[i] >= 48 && code[i] <= 57 && i != a)
		{
			counter++;
		}
	}
	(counter == a + b) ? cout << "Yes" : cout << "No";
}
