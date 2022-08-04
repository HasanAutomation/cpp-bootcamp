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

int main()
{
    int number = 0;
    // for(number = 0 ; number <= 10; number++)
        // findNthFibbonacciTerm(number);
        // findNthFibbonacciTerm(i);
    fibbonacciNumberExistence(4);
}