#include<iostream>

using namespace std;

void printNumberWithoutLastDigit(int number)
{
    number = number / 10;

    printf("Without last digit %d ",number);
}

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int unitDigit = a % 10;
    // printf("Unit digit of %d is %d ",a,unitDigit);
    printNumberWithoutLastDigit(a);
    return 0;
}