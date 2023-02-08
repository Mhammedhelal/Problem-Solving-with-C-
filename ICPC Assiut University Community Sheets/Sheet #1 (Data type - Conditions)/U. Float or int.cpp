#include <iostream>
using namespace std;

int main()
{
	float n;
	cin >> n;
	if (n / int(n) == 1)
		cout << "int " << n;
	else
		cout << "float " << int(n) << " " << n - int(n);

	return 0;
}
