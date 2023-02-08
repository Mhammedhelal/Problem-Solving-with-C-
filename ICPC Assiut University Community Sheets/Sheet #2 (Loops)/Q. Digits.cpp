#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string n;
		cin >> n;
		for (int z = size(n) - 1; z >= 0; z--)
		{
			cout << n[z] << " ";
		}

		cout << endl;
	}

	return 0;
}
