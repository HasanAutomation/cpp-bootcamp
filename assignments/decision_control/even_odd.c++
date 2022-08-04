
#include<iostream>

using namespace std;

bool evenOrOdd(int number)
{
    return number % 2 == 0;
}

bool evenOrOddWithoutMod(int number)
{
    return (number & 1) == 0;
}

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(evenOrOddWithoutMod(number))
        printf("Even");
    else
        printf("Odd");
}

