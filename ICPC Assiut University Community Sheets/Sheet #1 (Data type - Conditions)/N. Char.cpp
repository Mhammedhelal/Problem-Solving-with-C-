#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	int x = c;
	char rech;

	if (x >= 97 && x <= 122)
	{
		x -= 32;
		rech = x;
		cout << rech;
	}
	else
	{
		x += 32;
		rech = x;
		cout << rech;
	}

	return 0;
}
