#include <iostream>
using namespace std;

const int s = 100000;
void shift(int arr[s], int theShift) 
{
	for (int i = 0; i < theShift; i++)
		cout << arr[i] << " ";
}
int main()
{
	int n, x;
	cin >> n >> x;
	int arr[s];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int sh = x % n;
	for (int i = n - sh; i < n; i++) 
		cout << arr[i] << " ";

	shift(arr, n - sh);

	return 0;
}
