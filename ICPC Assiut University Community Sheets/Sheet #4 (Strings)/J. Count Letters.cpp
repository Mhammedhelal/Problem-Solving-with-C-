#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (char i = 'a'; i <= 'z'; i++)
	{
		int num = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (i == s[j])
				num++;
		}
		if(num!=0)
			cout << i << " : " << num << endl;
	}

	return 0;
}
