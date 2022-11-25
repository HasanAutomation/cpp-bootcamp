#include <iostream>

using namespace std;

int largest(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int find(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return i;

    return -1;
}

int secondLargest(int arr[], int size)
{
    int firstMax = largest(arr, size);
    int largestIndex = find(arr, size, firstMax);

    if (largestIndex == size - 1)
        return largest(arr, size - 1);
    else
    {
        for (int i = largestIndex; i < size - 1; i++)
            arr[i] = arr[i + 1];
        return largest(arr, size - 1);
    }
}

int main()
{
    int arr[] = {100, 80, 211, 1000};
    cout << secondLargest(arr, sizeof(arr) / sizeof(int));
}