#include<iostream>

using namespace std;

int greaterBetweenTwo(int first,int second)
{
    return first > second;
}

int main()
{
    int numberOne,numberTwo;
    printf("Enter two numbers:");
    scanf("%d%d",&numberOne,&numberTwo);
    if(greaterBetweenTwo(numberOne,numberTwo))
        printf("First number is greater %d ",numberOne);
    else
        printf("Second number is greater %d ",numberTwo);
}

