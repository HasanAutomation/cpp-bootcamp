#include <stdio.h>

void natualNumbersReverse(int);
void natualNumbers(int);

void natualNumbers(int n)
{
    if (n <= 0)
        return;
    natualNumbers(n - 1);
    printf("%d ", n);
}
void natualNumbersReverse(int n)
{
    if (n <= 0)
        return;
    printf("%d ", n);
    natualNumbersReverse(n - 1);
}
void natualNumbersOdd(int n)
{
    if (n <= 0)
        return;
    natualNumbersOdd(n - 1);
    printf("%d ", 2 * n + 1);
}
void natualNumbersOddReverse(int n)
{
    if (n <= 0)
        return;
    printf("%d ", 2 * n + 1);
    natualNumbersOddReverse(n - 1);
}

void natualNumbersEven(int n)
{
    if (n <= 0)
        return;
    natualNumbersEven(n - 1);
    printf("%d ", 2 * n);
}

void natualNumbersEvenReverse(int n)
{
    if (n <= 0)
        return;
    printf("%d ", 2 * n);
    natualNumbersEvenReverse(n - 1);
}
void natualNumbersSquare(int n)
{
    if (n <= 0)
        return;
    natualNumbersSquare(n - 1);
    printf("%d ", n * n);
}

void reverse(int n)
{
    if (n <= 0)
        return;
    printf("%d", n % 10);
    reverse(n / 10);
}

void decimalToBinary(int n)
{
    if (n <= 0)
        return;
    decimalToBinary(n / 2);
    printf("%d ", n % 2);
}

void decimalToOctal(int n)
{
    if (n <= 0)
        return;
    decimalToOctal(n / 8);
    printf("%d", n % 8);
}

int main()
{
    // natualNumbers(5);
    printf("\n");
    natualNumbersReverse(5);
    printf("\n");
    natualNumbersOdd(5);
    printf("\n");
    natualNumbersOddReverse(5);
    printf("\n");
    natualNumbersEven(5);
    printf("\n");
    natualNumbersEvenReverse(5);
    printf("\n");
    natualNumbersSquare(5);
    printf("\n");
    reverse(321);
    printf("\n");
    decimalToBinary(123);
    printf("\n");
    decimalToOctal(100);
}