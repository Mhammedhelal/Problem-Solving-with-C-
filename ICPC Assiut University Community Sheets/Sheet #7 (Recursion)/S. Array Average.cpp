#include <iostream>
#include <iomanip>
using namespace std;

double arr[100];
double av(int index, double res, int size) 
{ 

	if (size == index) 
	{
		return res / size;
	}
	return av(index + 1, res + arr[index], size); 
}
int main() 
{
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) 
	{
		cin >> arr[i];
	}
	cout << fixed << setprecision(6) << av(0, 0, size); 
}
