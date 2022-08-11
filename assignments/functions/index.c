#include <stdio.h>

double circleArea(int radius)
{
    const float PI = 3.14;
    double area = PI * radius * radius;
    printf("%lf", area);
    return area;
}

double simpleInterest(int principal, int rate, int time)
{
    const float interest = (principal * rate * time) / 100;
    printf("%0.2lf", interest);
    return interest;
}

int isEven(int number)
{
    return number % 2 == 0 ? 1 : 0;
}

int isDigitPresent(int number, int item)
{
    while (number > 0)
    {
        int rem = number % 10;
        if (rem == item)
            return 1;
        number /= 10;
    }
    return 0;
}
void printPrimeFactors(int number)
{
    int index = 0;
    int i = 2;

    while (number > 1)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
        }
        else
            i++;
    }
}

int main()
{
    circleArea(2);
    printf("\n");
    simpleInterest(100000, 10, 5);
    printf("\n");
    printf("%d", isEven(9));
    printf("\n");
    printf("%d", isDigitPresent(123, 0));
    printf("\n");
    printPrimeFactors(315);
}