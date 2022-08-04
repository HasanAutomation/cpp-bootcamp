#include<iostream>

using namespace std;

void printName()
{
    printf("Hello");   
}
void printNameSecondLine()
{
    printf("Hello\nStudents");
}

void printWithDoubleQuotes()
{
    printf("\"MySirg\"");
}

void printAreaOfCircle(int radius)
{
    double pi = 3.14;
    printf("Area of circle is %lf having the radius %d ",pi * radius * radius,radius);
}

int lengthOfString(char str[])
{
    return printf(str);
}

void printSpecialChar()
{
    printf("%%d\n");
    printf("\\n\n");
    printf("\\\\");
}

void printDate()
{
    int day,month,year;
    printf("Enter the date in DD/MM/YYYY format:\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day - %d , Month - %d , Year - %d",day,month,year);
}

void printTime()
{
    int hour,minute;
    printf("Enter the time in HH:MM format:\n");
    scanf("%d:%d",&hour,&minute);
    printf("%d Hour and %d Minute ",hour,minute);
}

void printOutput()
{
    int x = printf("ineuron");
    printf("%d",x);
}

int main()
{
    // int radius;
    // printf("Enter the radius of the circle:\n");
    // scanf("%d",&radius);
    // printAreaOfCircle(radius);
    // int len = lengthOfString("Helloo");
    // printf("\n%d",len);
    // printDate();
    // printTime();
    printOutput();

    return 0;
}