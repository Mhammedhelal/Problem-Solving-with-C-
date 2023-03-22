#include <iostream>
using namespace std;

int main()
{
	int Ra, Ca;
	cin >> Ra >> Ca;
	int** A = new int* [Ra];
	for (int i = 0; i < Ra; i++)
	{
		A[i] = new int[Ca];
	}
	for (int i = 0; i < Ra; i++)
	{
		for (int j = 0; j < Ca; j++)
		{
			cin >> A[i][j];
		}
	}

	int Rb, Cb;
	cin >> Rb >> Cb;
	int** B = new int* [Rb];
	for (int i = 0; i < Rb; i++)
	{
		B[i] = new int[Cb];
	}
	for (int i = 0; i < Rb; i++)
	{
		for (int j = 0; j < Cb; j++)
		{
			cin >> B[i][j];
		}
	}


	if (Ca == Rb)
	{
		int** sum = new int* [Ra];
		for (int i = 0; i < Ra; i++)
		{
			sum[i] = new int[Cb];
		}
		for (int i = 0; i < Ra; i++)
		{
			for (int j = 0; j < Cb; j++)
				sum[i][j] = 0;
		}
		for (int i = 0; i < Ra; i++)
		{
			for (int z = 0; z < Cb; z++)
			{
				for (int x = 0; x < Ca; x++)
				{
					sum[i][z] += A[i][x] * B[x][z];
				}
			}
		}

		for (int i = 0; i < Ra; i++)
		{
			for (int j = 0; j < Cb; j++)
				cout << sum[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
