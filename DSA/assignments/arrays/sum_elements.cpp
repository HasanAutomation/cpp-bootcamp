#include <iostream>

using namespace std;

int sum_elements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {10, 21, 10};
    cout << sum_elements(arr, sizeof(arr) / sizeof(int));
}