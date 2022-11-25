#include <iostream>

using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

bool find(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == value)
            return 1;
    return 0;
}

void remove_duplicates(int arr[], int size)
{
    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        if (!find(newArr, size, arr[i]))
            newArr[i] = arr[i];
    }

    cout << "\nIn the remove duplicate method\n";
    display(newArr, size);
    cout << "\n";

    arr = newArr;
}

int main()
{
    int arr[] = {10, 10, 10, 12};
    int capacity = sizeof(arr) / sizeof(int);

    cout << "Before removing duplicates\n";
    display(arr, capacity);
    cout << "\nAfter removing duplicates\n";
    remove_duplicates(arr, capacity);
    display(arr, capacity);
}