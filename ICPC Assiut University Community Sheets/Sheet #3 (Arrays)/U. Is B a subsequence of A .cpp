#include <iostream>
using namespace std;

int main()
{
	long long size, squsize;
	cin >> size >> squsize;
	long long *arr = new long long[size];
	long long *arrsqu = new long long[squsize];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < squsize; j++)
	{
		cin >> arrsqu[j];
	}

	int z = 0;
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arrsqu[z])
		{
			counter++;
			z++;
		}
	}
	if (counter == squsize)
	{
		cout << "YES";
	}
	else
		cout << "NO";

	return 0;
}
