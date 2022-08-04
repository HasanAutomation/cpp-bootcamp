#include<iostream>

using namespace std;

bool isThreeDigits(int number)
{
    int count = 0;

    while(number > 0)
    {
       number/=10;
       count++;
    }
    return count == 3;
}

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    if(isThreeDigits(number))
        printf("3 digits");
    else
        printf("not three digit");
}

