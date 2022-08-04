#include<iostream>

using namespace std;

bool isDivisible(int number)
{
    return (number % 2 == 0) && (number % 3 == 0);
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(isDivisible(number))
        printf("Divisible");
    else
        printf("Not Divisible");
}