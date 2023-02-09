#include <iostream>
using namespace std;
int main()
{
	int size, position;
	long long value;
	cin >> size;
	long long *arr = new long long[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	value = arr[0];
	position = 1;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < value)
		{
			value = arr[i];
			position = i + 1;
		}
	}
	cout << value << " " << position;

	return 0;
}
