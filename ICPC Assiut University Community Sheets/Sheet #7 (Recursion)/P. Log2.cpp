#include <iostream>
using namespace std;

int counter = 0;
void log(long long num)
{

	if (num == 1)
		return;
	counter++;
	log(num / 2);
}
int main()
{
	long long n;
	cin >> n;
	log(n);
	cout << counter;

	return 0;
}
