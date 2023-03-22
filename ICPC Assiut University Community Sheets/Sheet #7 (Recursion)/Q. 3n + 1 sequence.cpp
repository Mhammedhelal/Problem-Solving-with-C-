#include <iostream>
using namespace std;

int sequenceLength(int n, int counter)
{
	if (n == 1)
		return counter;
	if (n % 2 == 0)
	{
		counter++;
		return sequenceLength(n / 2, counter);
	}
	else
	{
		counter++;
		return sequenceLength(3 * n + 1, counter);
	}
}
int sequenceLength(int n)
{
	return sequenceLength(n, 1);
}
int main()
{
	int n;
	cin >> n;
	cout << sequenceLength(n);

	return 0;
}
