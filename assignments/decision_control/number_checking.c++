#include<iostream>

using namespace std;

void isZeroOrPositiveNegetive(int number)
{
    number > 0 ? printf("Positive") : number == 0 ? printf("Zero") : printf("Negetive");
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    isZeroOrPositiveNegetive(number);
}