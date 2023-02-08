#include <iostream>
using namespace std;

int main()
{
	char s;
	cin >> s;
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << s;
		}
		cout << endl;
	}

	return 0;
}
