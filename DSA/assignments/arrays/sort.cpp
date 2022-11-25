#include <iostream>

using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void sort(int arr[], int size)
{
    for (int round = 1; round < size; round++)
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
}

int main()
{
    int arr[] = {5, 2, 7, 1, 10, 4, 17, 14, 21};
    int capacity = sizeof(arr) / sizeof(int);
    cout << "Before sorting\n";
    display(arr, capacity);
    cout << "\n";
    cout << "After sorting\n";
    // sort
    sort(arr, capacity);
    display(arr, capacity);
}