#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string hello = "hello";

	int i = 0, z = 0;
	while (true)
	{
		if (i == s.size() || z == hello.size())
			break;
		if (s[i] == hello[z])
			z++;
		i++;
	}

	(z == 5) ? cout << "YES" : cout << "NO";

	return 0;
}
