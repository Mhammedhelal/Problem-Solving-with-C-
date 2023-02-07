#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	bool isEven;
	while (x != 0)
	{
		(x % 2 == 0) ? isEven = true : isEven = false;
		x /= 10;
	}
	(isEven) ? cout << "EVEN" : cout << "ODD";

	return 0;
}
