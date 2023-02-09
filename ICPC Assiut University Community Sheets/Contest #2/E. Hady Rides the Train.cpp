#include <iostream>
using namespace std;

int main()
{
	long long id;
	cin >> id;
	long long row, col;
	row = id / 4;
	if (row % 2 == 0)
		col = id % 4;
	else
		col = 3 - (id % 4);

	cout << row << " " << col << endl;

	return 0;
}
