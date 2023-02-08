#include <iostream>
using namespace std;

int main()
{
    int a, b, GCD;
    cin >> a >> b;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            GCD = i;
    }
    cout << GCD;

	return 0;
}
