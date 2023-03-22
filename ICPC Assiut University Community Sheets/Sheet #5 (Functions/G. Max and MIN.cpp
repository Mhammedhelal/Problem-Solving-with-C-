#include <iostream>
using namespace std;


int array_minimum(int arr[], int size);
int array_maximum(int arr[], int size);
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << array_minimum(arr, n) << " " << array_maximum(arr, n);

    return 0;
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
int array_maximum(int arr[], int size)
{
    int maximum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
