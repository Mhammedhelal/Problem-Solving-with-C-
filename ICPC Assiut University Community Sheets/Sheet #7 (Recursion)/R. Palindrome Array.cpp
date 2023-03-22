#include <iostream>
using namespace std;

bool isPalindrome(int *arr, int size, int index)
{
	if (index == size / 2)
		return true;
	if (arr[index] != arr[size - 1 - index])
		return false;
	return isPalindrome(arr, size, index + 1);
}
bool isPalindrome(int arr[], int size)
{
	return isPalindrome(arr, size, 0);
}
int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	(isPalindrome(arr, size)) ? cout << "YES" : cout << "NO";

	return 0;
}
