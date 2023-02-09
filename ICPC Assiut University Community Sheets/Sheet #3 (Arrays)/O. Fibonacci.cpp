#include <iostream>
using namespace std;

int main()
{
    long long position, start = 0, sec = 1, res;
    cin >> position;
    if (position == 1)
        cout << start;
    else if (position == 2)
        cout << sec;
    else
    {
        for (long long i = 3; i <= position; i++)
        {
            res = start + sec;
            start = sec;
            sec = res;
        }
        cout << sec;
    }
}
