#include<iostream>

using namespace std;

int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int unitDigit = a % 10;
    printf("Unit digit of %d is %d ",a,unitDigit);
    return 0;
}