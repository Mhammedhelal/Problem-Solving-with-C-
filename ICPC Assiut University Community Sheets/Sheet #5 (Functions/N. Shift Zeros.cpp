#include <iostream>
using namespace std;

void shiftZeros(int arr[], int size) 
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0)
			cout << arr[i] << " ";
		else
			count++;
	}
	for (int i = 0; i < count; i++)
	{
		cout << 0 << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	shiftZeros(arr, n);

	return 0;
}
