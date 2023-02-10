#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s)
{
	int j = size(s) - 1, i = 0;
	if (size(s) % 2 == 0)
	{
		while (j != i - 1)
		{
			swap(s[i], s[j]);
			i++;
			j--;
		}
	}
	else
	{
		while (j != i)
		{
			swap(s[i], s[j]);
			i++;
			j--;
		}
	}

}
int main()
{
	string s;
	int flag = 0;
	while (cin >> s)
	{
		reverseString(s);
		if (flag)
			cout << " ";
		flag = 1;
		cout << s;
	}

	return 0;
}
