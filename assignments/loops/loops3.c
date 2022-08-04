#include<stdio.h>

void findNthFibbonacciTerm(int n)
{
    int a = 0, b = 1, c = 0;
    if(n <= 0)
    {
        printf("%d ",a);
        return;
    }
    if(n==1)
    {
        printf("%d ",b);
        return;
    }
    for(int i = 2 ; i <= n ; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d ",c);


}

void fibbonacciNumberExistence(int number)
{
    int a = 0, b = 1, c = 0;

    if(a == number || b == number)
    {
        printf("Present");
        return;
    }
    while(1)
    {   
        c = a + b;
        a = b;
        b = c;

        if(c == number)
        {
            printf("Present");
            return;
        }
        if(c > number)
        {
            printf("Absent");
            return;
        }
    }
}

void findHCF(int a,int b)
{
    int gcd;
    for(int i = 2 ; i <= a && i <= b ; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d ",a,b,gcd);


}

void checkCoPrime(int a,int b)
{
    // If the HCF is only 1 then they are called co prime
    int isCoPrime = 1;

    for(int i = 2 ; i < (a > b ? a : b) ; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            isCoPrime = 0;
            break;
        }
    } 
    if(isCoPrime)
        printf("Co prime");
    else
        printf("Non Co prime");
}

int isPrime(int number)
{
    for(int i = 2 ; i < number ; i++)
    {
        if(number % i == 0)
            return 0;
    }
    return 1;
}

void printPrimeUnder100()
{
    for(int i = 1 ; i <= 100 ; i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }
}

void printPrimeBetweenTwoNumbers(int a , int b)
{
    for(int i = a ; i <= b ;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }
}

void printNextprimeNumber(int number)
{
    int i = number;
    while(i)
    {
        if(isPrime(i))
        {
            if(i > number)
            {
                printf("%d ",i);
                break;
            }
        }
        i++;
    }
}

int checkArmstrongNumber(int number)
{
    int cube = 0,originalNumber = number;
    while(number > 0)
    {
        int rem = number % 10;
        cube = cube + rem * rem * rem;
        number/=10;
    }
    if(cube == originalNumber)
        return 1;
    return 0;

}

void printArmstrongNumbers()
{
    for(int i = 0 ; i <= 1000 ; i++)
    {
        if(checkArmstrongNumber(i))
            printf("%d ",i);
    }
}

int main()
{
    int number = 0;
    // for(number = 0 ; number <= 10; number++)
        // findNthFibbonacciTerm(number);
        // findNthFibbonacciTerm(i);
    // fibbonacciNumberExistence(4);
    // findHCF(100,120);
    // checkCoPrime(21,27);
    // printPrimeUnder100();
    // printPrimeBetweenTwoNumbers(1,10);
    // printNextprimeNumber(3);
    // printArmstrongNumbers();
}