#include <iostream>
using namespace std;

void reverse_array(int arr[], int size);

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			reverse_array(arr, i);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
void reverse_array(int arr[], int size)
{
	int j = size - 1, i = 0;
	if (size % 2 == 0)
	{
		while (j != i - 1)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	else
	{
		while (j != i)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
}
