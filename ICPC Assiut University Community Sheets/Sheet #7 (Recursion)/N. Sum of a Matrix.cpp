#include <iostream>
using namespace std;

int row, col;
int A[100][100], B[100][100], result[100][100];
void sum(int R, int C)
{

	if (R == row || C == col)
	{
		return;
	}
	if (C < col - 1)
	{
		sum(R, C + 1);
	}
	else
	{
		sum(R + 1, 0);
	}
	result[R][C] = A[R][C] + B[R][C];
}
int main()
{
	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		for (int z = 0; z < col; z++)
		{
			cin >> A[i][z];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int z = 0; z < col; z++)
		{
			cin >> B[i][z];
		}
	}
	sum(0, 0);
	for (int i = 0; i < row; i++)
	{
		for (int z = 0; z < col; z++)
		{
			cout << result[i][z] << " ";
		}
		cout << endl;
	}
}
