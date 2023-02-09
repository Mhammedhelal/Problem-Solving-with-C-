#include <iostream>
using namespace std;

int main()
{
	int size, value, occurance = 0;
	cin >> size;
	int *arr = new int[size];
	// initializing elements of the arrays
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	// determining the minimum element
	value = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < value)
		{
			value = arr[i];
		}
	}
	// counting number of occurance
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
			occurance++;
	}
	if (occurance % 2 == 0)
		cout << "Unlucky";
	else
		cout << "Lucky";
	
	return 0;
}


