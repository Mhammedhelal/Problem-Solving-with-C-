#include <iostream>
using namespace std;

int main()
{
	int t, w, h;
	cin >> t;
	while (t--)
	{
		cin >> w >> h;
		if (w == h)
		{
			cout << "Square\n";
		}
		else
		{
			cout << "Rectangle\n";
		}
	}

	return 0;
}
