#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;
	int size = min(x.size(), y.size());
	int flag = 0;
	for (int i = 0; i < size; i++)
	{
		if (x[i] < y[i]) 
		{
			cout << x << endl;
			flag = 0;
			break;
		}
		else if (x[i] > y[i])
		{
			cout << y << endl;
			flag = 0;
			break;
		}
		else
		{
			flag = -1;
		}
	}
	if (flag == -1)
	{
		if (x.size() > y.size())
		{
			cout << y << endl;
		}
		else cout << x << endl;
	}
	
	return 0;
}
