#include <stdio.h>

void sort(int *, int);
int displaySum(int *, int);

void inputArray(int arr[], int size)
{
    printf("Enter %d values:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}
void displayArray(int arr[], int size)
{
    printf("Values are:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int inputArraySize()
{
    int arSize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arSize);
    return arSize;
}

int displaySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    printf("Sum is %d \n", sum);
    return sum;
}

void displayAvrage()
{
    int arSize;
    printf("Enter the size of the array:\n");
    scanf("%d", &arSize);
    int ar[arSize];
    int size = sizeof(ar) / sizeof(int);
    inputArray(ar, size);
    int sum = displaySum(ar, size);
    printf("Average is %d ", sum / size);
}

int greatest()
{
    int size = inputArraySize();
    int arr[size];
    inputArray(arr, size);
    displayArray(arr, size);
    int biggest = arr[0];
    for (int i = 0; i < size; i++)
        if (arr[i] > biggest)
            biggest = arr[i];
    printf("Greatest is %d ", biggest);
}

void reverseArray()
{
    int size = inputArraySize();
    int arr[size];
    inputArray(arr, size);
    printf("Original Array:\n");
    displayArray(arr, size);
    printf("\nIn reverse order");
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}
int secondGreatest()
{
    int size = inputArraySize();
    int arr[size];
    inputArray(arr, size);
    displayArray(arr, size);
    int biggest = arr[0];
    for (int i = 0; i < size; i++)
        if (arr[i] > biggest)
            biggest = arr[i];
    printf("Greatest is %d ", biggest);
}
int smallest()
{
    int size = inputArraySize();
    int arr[size];
    inputArray(arr, size);
    displayArray(arr, size);
    int small = arr[0];
    for (int i = 0; i < size; i++)
        if (arr[i] < small)
            small = arr[i];
    printf("Smallest is %d ", small);
}

void copyArray()
{
    int size = inputArraySize();
    int arr[size];
    int copiedArray[size];
    inputArray(arr, size);
    printf("Original Array:\n");
    displayArray(arr, size);
    copy(arr, copiedArray, size);
    printf("\nCopied Array:\n");
    displayArray(copiedArray, size);
}

void copy(int original[], int copied[], int size)
{
    for (int i = 0; i < size; i++)
    {
        copied[i] = original[i];
    }
}

void sumOfEvenAndOdd()
{
    int arSize;
    int evenSum = 0, oddSum = 0;
    printf("Enter the size of the array:\n");
    scanf("%d", &arSize);
    int ar[arSize];
    int size = sizeof(ar) / sizeof(int);
    inputArray(ar, size);
    for (int i = 0; i < size; i++)
    {
        if (ar[i] % 2 == 0)
            evenSum += ar[i];
        else
            oddSum += ar[i];
    }
    printf("Even sum is %d ", evenSum);
    printf("Odd sum is %d ", oddSum);
}

// int *evenArray(int arr[], int size)
// {
//     int even[100];
//     int ind = 0;
//     for (int i = 0; i < size; i++)
//         if (arr[i] % 2 == 0)
//         {
//             even[ind++] = arr[i];
//         }
//     return even;
// }
// int *oddArray(int arr[], int size)
// {
//     int odd[100];
//     int ind = 0;
//     for (int i = 0; i < size; i++)
//         if (arr[i] % 2 != 0)
//         {
//             odd[ind++] = arr[i];
//         }
//     return odd;
// }

void calcualteSumOfNumbers()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    inputArray(arr, size);
    displaySum(arr, size);
}

void sortElements()
{
    int size = inputArraySize();
    int arr[size];
    inputArray(arr, size);
    printf("Before sorting:\n");
    displayArray(arr, size);
    printf("\nAfter sorting:\n");
    sort(arr, size);
    displayArray(arr, size);
}

void sort(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}

int main()
{
    // calcualteSumOfNumbers();
    // displayAvrage();
    // sumOfEvenAndOdd();
    // smallest();
    // sortElements();
    // copyArray();
    reverseArray();
}