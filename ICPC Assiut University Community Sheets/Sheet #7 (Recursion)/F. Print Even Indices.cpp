#include <iostream>
using namespace std;

void print(long long arr[], int index);
int main()
{
	int size;
	cin >> size;
	long long* arr = new long long[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	print(arr, size - 1);

	return 0;
}
void print(long long arr[], int index)
{
	if (index < 0)
		return;
	if (index % 2 == 0)
		cout << arr[index] << " ";
	print(arr, index - 1);
}
