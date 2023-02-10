#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tst;
	cin >> tst;
	while (tst--)
	{
		string s, t;
		cin >> s >> t;
		int size = s.size() + t.size();
		int flags = 1, flagt = 1;
		for (int i = 0; i < size; i++)
		{
			if (s.size() != i && flags)
				cout << s[i];
			else
				flags = 0;
			if (t.size() != i && flagt)
				cout << t[i];
			else
				flagt = 0;
		}
		cout << endl;
	}

	return 0;
}
