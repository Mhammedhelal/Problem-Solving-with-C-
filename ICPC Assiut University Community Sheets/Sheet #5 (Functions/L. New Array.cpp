#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	int* A = new int[n];
	int* B = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}for (int i = 0; i < n; i++)
	{
		cin >> B[i];
	}
	print(B, n);
	print(A, n);

	return 0;
}
