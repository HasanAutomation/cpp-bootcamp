#include <stdio.h>

void lcm(int a, int b)
{
    int result;
    for (int i = 1; i <= b; i++)
    {
        result = a * i;
        if (result % b == 0)
            break;
    }
    printf("LCM is %d ", result);
}

int isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

void printNextPrime(int number)
{
    int desiredNumber = number + 1;
    while (1)
    {
        if (isPrime(desiredNumber))
        {
            printf("%d ", desiredNumber);
            break;
        }
        desiredNumber++;
    }
}

void printNPrimeNumbers(int n)
{
    int i = 1;
    int desiredPrimeNumbers = 2;
    while (i <= n)
    {
        if (isPrime(desiredPrimeNumbers))
        {
            printf("%d ", desiredPrimeNumbers);
            i++;
        }
        desiredPrimeNumbers++;
    }
}
void printPrimeBetweenTwoNumbers(int start, int end)
{
    for (int i = start; i < end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
}

void findHCF(int a, int b)
{
    int result = a < b ? a : b;
    while (result > 0)
    {
        if (a % result == 0 && b % result == 0)
            break;
        result--;
    }
    printf("HCF is %d ", result);
}

int main()
{
    // lcm(18, 24);
    // printNextPrime(5);
    // printNPrimeNumbers(5);
    // printPrimeBetweenTwoNumbers(2, 11);
    findHCF(98, 56);
}