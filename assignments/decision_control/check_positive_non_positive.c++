#include<iostream>

using namespace std;

bool checkPositiveNonPositive(int number)
{
    return number > 0;
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(checkPositiveNonPositive(number))
        printf("This is a positive number");
    else
        printf("This is a non positive number");
}

