#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
	int sum = 0;
	for (int i = 0; i < size(s); i++)
	{
		sum += (int(s[i]) - 48);
	}
	cout << sum;

	return 0;
}
