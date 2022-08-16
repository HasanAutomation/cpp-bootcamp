#include <stdio.h>

int sumOfNNaturalNumbers(int n)
{
    if (n <= 0)
        return 0;
    return n + sumOfNNaturalNumbers(n - 1);
}
int sumOfNOddNaturalNumbers(int n)
{
    if (n <= 0)
        return 0;
    return n + sumOfNOddNaturalNumbers(n - 2);
}
int sumOfSqrNaturalNumbers(int n)
{
    if (n <= 0)
        return 0;
    return n + sumOfSqrNaturalNumbers(n * n - 1);
}

int sumOfDigits(int n)
{
    if (n <= 0)
        return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int calculatePower(int n, int power)
{
    if (power == 0)
        return 1;
    return n * calculatePower(n, power - 1);
}

int hcf(int n1, int n2)
{
    if (n1 == n2)
        return n1;
    if (n1 > n2)
        return hcf(n1 - n2, n2);
    return hcf(n1, n2 - n1);
}

int main()
{
    printf("%d", sumOfNNaturalNumbers(3));
    printf("\n");
    printf("%d", sumOfDigits(1234));
    printf("\n");
    printf("%d", factorial(5));
    printf("\n");
    for (int i = 0; i <= 8; i++)
        printf("%d ", fibonacci(i));
    printf("\n");
    printf("%d", countDigits(12345));
    printf("\n");
    printf("%d", calculatePower(2, 4));
    return 0;
}