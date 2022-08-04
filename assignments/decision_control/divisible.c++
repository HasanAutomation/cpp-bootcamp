#include<iostream>

using namespace std;

bool divisibleByFive(int number)
{
    return number % 5 == 0;
}

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(divisibleByFive(number))
        printf("Divisible");
    else
        printf("Not divisible");
}

