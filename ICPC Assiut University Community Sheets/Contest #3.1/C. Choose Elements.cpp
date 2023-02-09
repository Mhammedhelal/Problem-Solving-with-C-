#include <iostream>
using namespace std;

void sortArray(long long arr[], int size);
void reverse_array(long long arr[], int size);
int main()
{
	int size, num;
	cin >> size >> num;
	long long *arr = new long long[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	sortArray(arr, size);
	reverse_array(arr, size);
	long long sum = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < 0)
		{
			break;
		}
		sum += arr[i];
	}
	cout << sum << endl;
	return 0;
}
void sortArray(long long arr[], int size)
{
	int min_index;
	for (int i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[min_index], arr[i]);
	}
}
void reverse_array(long long arr[], int size)
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
