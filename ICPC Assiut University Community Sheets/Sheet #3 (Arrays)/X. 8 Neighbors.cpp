#include <iostream>
using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;
	char arr[101][101];
	for (int i = 1; i <= row; i++)
	{
		for (int z = 1; z <= col; z++)
		{
			cin >> arr[i][z];
		}
	}
	int rowIn, colIn;
	cin >> rowIn >> colIn;
	if (arr[rowIn][colIn - 1] != '.' &&
		arr[rowIn][colIn + 1] != '.' &&
		arr[rowIn - 1][colIn] != '.' &&
		arr[rowIn + 1][colIn] != '.' &&
		arr[rowIn - 1][colIn - 1] != '.' &&
		arr[rowIn - 1][colIn + 1] != '.' &&
		arr[rowIn + 1][colIn - 1] != '.' &&
		arr[rowIn + 1][colIn + 1] != '.')
	{
		cout << "yes";
	}
	else
		cout << "no";

	return 0;
}
