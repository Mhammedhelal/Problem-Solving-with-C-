#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ones = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
                {ones++;}
            n /= 2;
        }

        int sum = 0;
        for (int z = 0; z < ones; z++)
        {
            sum += 1 * pow(2, z);
        }
        cout << sum << endl;
    }

	return 0;
}
