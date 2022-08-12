#include <stdio.h>

void sumNaturalNumbers()
{
    int n, sum = 0;
    printf("Enter how many numbers you wanna enter:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum is %d ", sum);
}

void sumEvenNaturalNumbers()
{
    int n, sum = 0;
    printf("Enter how many even numbers you want to add:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 2 * i;
    }

    printf("The sum is %d ", sum);
}
void sumOddNaturalNumbers()
{
    int n, sum = 0;
    printf("Enter how many even numbers you want to add:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i) - 1;
    }

    printf("The sum is %d ", sum);
}

void sumOfSquare()
{
    int n, sum = 0;
    printf("Enter how many even numbers you want to add:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    printf("The sum is %d ", sum);
}
void sumOfCube()
{
    int n, sum = 0;
    printf("Enter how many even numbers you want to add:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }

    printf("The sum is %d ", sum);
}

void factorial()
{
    int result = 1, number;
    printf("Enter a number:\n");
    scanf("%d", &number);
    for (int i = number; i >= 1; i--)
        result = result * i;
    printf("Factorial is %d ", result);
}

void countDigit()
{
    int number = 12345, count = 0;
    while (number > 0)
    {
        number /= 10;
        count++;
    }
    printf("Count is %d ", count);
}

void isPrime()
{
    int number = 4, i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
            break;
    }
    if (i == number)
        printf("Prime");
    else
        printf("Non Prime");
}

void reverseNumber()
{
    int number = 432, reverse = 0;

    while (number > 0)
    {
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number /= 10;
    }
    printf("Reverse is %d ", reverse);
}

void LCM(int a, int b)
{
    int lcm;
    for (int i = 1; i <= b; i++)
    {
        lcm = a * i;
        if (lcm % b == 0)
            break;
    }
    printf("%d", lcm);
}

int main()
{
    // sumNaturalNumbers();
    // sumEvenNaturalNumbers();
    // sumOddNaturalNumbers();
    // factorial();
    // countDigit();
    // isPrime();
    // reverseNumber();
    LCM(18, 24);
}