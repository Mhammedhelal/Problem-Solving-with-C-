#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cin >> size;
	string s;
	cin >> s;
	int score = 0;
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		switch (c)
		{
		case 'V':
			score += 5;
			break;
		case 'W':
			score += 2;
			break;
		case 'X':
			if (i != s.size() - 1)
				{s[i + 1] = '0';}
			break;
		case 'Y':
			if (i != s.size() - 1)
				{	s.push_back(s[i + 1]);
					s[i + 1] = '0';}
			break;
		case 'Z':
			if (i != s.size() - 1)
			{
				if (s[i + 1] == 'W')
				{
					score /= 2;
					s[i + 1] = '0';
				}
				if (s[i + 1] == 'V')
				{
					score /= 5;
					s[i + 1] = '0';
				}
				break;
			}
		}
	}
	cout << score;

	return 0;
}
