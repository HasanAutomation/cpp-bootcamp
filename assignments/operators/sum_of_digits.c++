#include<iostream>

using namespace std;

void sumOfDigits()
{
    int number,sum = 0;
    printf("Enter a number:\n");
    scanf("%d",&number);

    int rem = number % 10;
    sum += rem;
    number/= 10;

    rem = number % 10;
    sum += rem;
    number/= 10;

    rem = number % 10;
    sum += rem;
    number/= 10;

    printf("The sum is %d ",sum);

}

int main()
{
    sumOfDigits();
    return 0;
}