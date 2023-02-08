#include <iostream>
using namespace std;

int main()
{
    int n;
    int rev = 0;
    cin >> n;
    int n2 = n;

    while (n2 != 0)
    {
        rev *= 10;
        rev += n2 % 10;
        n2 = n2 / 10;
    }
    cout << rev << endl;
    (n == rev) ? cout << "YES" : cout << "NO";

	return 0;
}
