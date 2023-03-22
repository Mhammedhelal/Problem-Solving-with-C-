#include <iostream>
#include <iomanip> 
using namespace std;

double sum(int size) 
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{ 
		double value;
		cin >> value;
		sum += value;
	}
	return sum / size;
}
int main()
{
	int n;
	cin >> n;
	cout << setprecision(8) << (sum(n)) << endl;

	return 0;
}
