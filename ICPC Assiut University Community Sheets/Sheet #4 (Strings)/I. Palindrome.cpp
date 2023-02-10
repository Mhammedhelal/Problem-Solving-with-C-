#include <iostream>
#include <string>
using namespace std;

string reverseString(string s);
int main()
{
	string s;
	cin >> s;
	(s == reverseString(s)) ? cout << "YES" : cout << "NO";

	return 0;
}


string reverseString(string s)
{
	string rev = s;
	int j = size(rev) - 1, i = 0;
	if (size(rev) % 2 == 0)
	{
		while (j != i - 1)
		{
			swap(rev[i], rev[j]);
			i++;
			j--;
		}
	}
	else
	{
		while (j != i)
		{
			swap(rev[i], rev[j]);
			i++;
			j--;
		}
	}

	return rev;
}
