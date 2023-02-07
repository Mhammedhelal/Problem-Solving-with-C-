#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (max(a, b) % min(a, b) == 0)
		cout << "Multiples";
	else
		cout << "No Multiples";

	return 0;
}
