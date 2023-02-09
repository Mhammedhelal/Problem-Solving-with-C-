#include <iostream>
using namespace std;

int array_minimum(int arr[], int size);

int main()
{
    int n, flag;
    cin >> n;
    int arr[n], operation[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            flag += 1;
        }
        operation[i] = flag;
    }


    cout << array_minimum(operation, n);
}

int array_minimum(int arr[], int size)
{
    int minimum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    return minimum;
}
