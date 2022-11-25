#include <iostream>
using namespace std;

int greatest(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {11, 1, 3, 12};
    cout << greatest(arr, sizeof(arr) / sizeof(int));
}