#include <iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int element = 1;
		for (int j = 0; j <= i; j++)
		{
			cout << element << " ";
			element = element * (i - j) / (j + 1);
		}
		cout << endl;
	}
	
	return 0;
}
