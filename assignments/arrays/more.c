#include <stdio.h>

void displayArray(int arr[], int size)
{
    printf("Values are:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void displayInReverse(int arr[], int size)
{
    printf("\nValues in reverse order:\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

void rotateArray()
{
    int arr[] = {3, 4, 5, 6, 7, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    int d = 2;
    int temp[d];
    int stored[size - d];
    printf("Original array is: \n");
    displayArray(arr, size);
    printf("\nRotation value is %d \n", d);
    for (int i = 0; i < d; i++)
        temp[i] = arr[i];
    int j = 0;
    int k = 0;
    int p = 0;
    for (int i = d; i < size; i++)
        stored[j++] = arr[i];
    for (int i = 0; i < size; i++)
    {
        if (i < size - d)

            arr[i] = stored[k++];
        else
            arr[i] = temp[p++];
    }
    printf("\nRotated array is :\n");
    displayArray(arr, size);
}

void rotateOptimised()
{
    int arr[] = {3, 4, 5, 6, 7, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    int d = 2, k = 0;
    int temp[d];
    printf("Original array is: \n");
    displayArray(arr, size);
    printf("\nRotation value is %d \n", d);

    // Storing the size-d elements in the first place
    for (int i = d; i < size; i++)
        temp[k++] = arr[i];

    // Storing the d elements
    for (int i = 0; i < d; i++)
        temp[k++] = arr[i];

    //  Copying all the elements back to the original array
    for (int i = 0; i < size; i++)
        arr[i] = temp[i];

    printf("\nRotated array is :\n");
    displayArray(arr, size);
}

void findAdjacentDuplicateValue()
{
    int arr[] = {1, 2, 3, 4, 3, 5};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    int foundDuplicate = 0;
    while (i < size - 2)
    {
        if (arr[i] == arr[i + 1])
        {
            printf("Found duplicate value %d with the index %d ", arr[i], i);
            foundDuplicate = 1;
            break;
        }
        i++;
    }
    if (!foundDuplicate)
        printf("No adjacent duplicate value is found");
}

void readArray(int arr[], int size)
{
    printf("Please enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void reverseArray()
{
    int arr[5];
    int size = sizeof(arr) / sizeof(int);
    readArray(arr, size);
    displayArray(arr, size);
    displayInReverse(arr, size);
}

void displayTotalNumberOfDuplicateElements()
{
    int arr[] = {1, 2, 3, 4, 6, 2};
    int total = 0, i = 0;
    int size = sizeof(arr) / sizeof(int);
    int duplicateValues[10];
    while (i < size - 2)
    {
        for (int j = 1; j < size - 1; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    total++;
                }
            }
        }
        i++;
    }
    printf("Total Number of duplicate elements is %d ", total);
}

void printUniqueElements()
{
    int arr[] = {1, 2, 3, 1, 4, 2, 6};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    while (i < size - 2)
    {
        for (int j = 1; i < size - 1; j++)
            ;
    }
}

void printFrequencyOfElements()
{
    int eles[] = {1, 2, 3, 4, 1, 2, 8};
    int size = sizeof(eles) / sizeof(int);
    int frequency = 0, j = 0;
    int number = 6;
    while (j < size)
    {
        for (int i = 0; i < size; i++)
        {
            if (eles[j] == eles[i])
                frequency++;
        }
        printf("\nFrequency of %d is %d ", eles[j], frequency);
        frequency = 0;
        j++;
    }
}

int main()
{
    // rotateOptimised();
    // findAdjacentDuplicateValue();
    // reverseArray();
    // displayTotalNumberOfDuplicateElements();
    printFrequencyOfElements();
}