#include<iostream>

using namespace std;

bool isLeapYear(int year)
{
    if(year % 4 == 0)
        return true;
    else if(year % 400 == 0)
        return true;
    else if (year % 100 ==0)
        return false;
    else
        return false;
}

int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);
    if(isLeapYear(year))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}