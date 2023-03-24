#include <iostream>
#include <string>
using namespace std;



int main()
{
	string n;
	int x;
	cin >> n >> x;
	long long result = 0;
	for (int i = 0; i < n.length(); i++)
	{
		result *= 10;
		result += n[i] - '0';
		result %= x;
	}
	if (result == 0)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}
