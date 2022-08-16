#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayArray(int *p, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(p + i));
}
void scanArray(int *p, int size)
{
    printf("Enter %d values :", size);
    for (int i = 0; i < size; i++)
        scanf("%d", p + i);
}

void arrayDisplay()
{
    int a[2];
    scanArray(a, 2);
    displayArray(a, 2);
}

int main()
{
    int a = 10, b = 12;
    printf("Before swapping %d %d ", a, b);
    swap(&a, &b);
    printf("After swapping %d %d \n", a, b);
    arrayDisplay();
}