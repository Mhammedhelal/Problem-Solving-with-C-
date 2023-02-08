#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char comparison;
	cin >> a >> comparison >> b;

	if (comparison == '>' && a > b)
		cout << "Right";
	else if (comparison == '<' && a < b)
		cout << "Right";
	else if (comparison == '=' && a == b)
		cout << "Right";
	else
		cout << "Wrong";

	return 0;
}
