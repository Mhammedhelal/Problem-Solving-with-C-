#include <iostream>
#include<algorithm>
using namespace std;

int array_minimum(int arr[], int size);
int array_maximum(int arr[], int size);
bool isPrime(int n);
bool isPalindrome(int n);
int divisors(int n);
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int countPrime = 0;
	int countPalindrome = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(arr[i]))
			countPrime++;
		if (isPalindrome(arr[i]))
			countPalindrome++;
	}
	int maxdiv = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (divisors(arr[i]) > divisors(maxdiv))
			maxdiv = arr[i];
		if (divisors(arr[i]) == divisors(maxdiv) && arr[i] > maxdiv)
			maxdiv = max(arr[i], maxdiv);
	}
	
	cout << "The maximum number : " << array_maximum(arr, n) << endl;
	cout << "The minimum number : " << array_minimum(arr, n) << endl;
	cout << "The number of prime numbers : " << countPrime << endl;
	cout << "The number of palindrome numbers : " << countPalindrome << endl;
	cout << "The number that has the maximum number of divisors : " << maxdiv << endl;

	return 0;
}
int array_minimum(int arr[], int size)
{
	int minimum = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}
	}
	return minimum;
}
int array_maximum(int arr[], int size)
{
	int maximum = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > maximum)
		{
			maximum = arr[i];
		}
	}
	return maximum;
}
bool isPrime(int n)
{
	if (n == 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	int factor = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
bool isPalindrome(int n)
{
	int n2 = n;
	int rev = 0;
	while (n2 != 0)
	{
		rev *= 10;
		rev += n2 % 10;
		n2 /= 10;
	}

	return(n == rev);
}
int divisors(int n)
{
	int m = n / 2;
	int counter = 0;
	for (int z = 1; z <= m; z++) 
	{
		if (n % z == 0) 
			counter++;
	}
	return counter;
}
