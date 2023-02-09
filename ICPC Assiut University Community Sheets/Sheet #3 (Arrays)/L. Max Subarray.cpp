#include <iostream>
using namespace std;

int main()
{
	int tstcase;
	cin >> tstcase;
	while (tstcase--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			cout << arr[i] << " ";
		}
		int i = 0, ma, z = 0;
		while (!(z == size - 1))
		{
			if (i == z)
				ma = max(arr[i], arr[i + 1]);
			else
				ma = max(ma, arr[i + 1]);
			cout << ma << " ";
			i++;
			if (i == size - 1)
			{
				z++;
				i = z;
			}
		}

		cout << endl;
	}

	return 0;
}
