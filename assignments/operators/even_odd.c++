#include<iostream>

using namespace std;


bool isEven(int number)
{
    return (number & 1) == 0;
}

void printSizeOfDT()
{
    printf("SIZE of INT is %d ",sizeof(int));
    printf("SIZE of FLOAT is %d ",sizeof(float));
    printf("SIZE of DOUBLE is %d ",sizeof(double));
    printf("SIZE of BOOLEAN is %d ",sizeof(bool));
    printf("SIZE of CHAR is %d ",sizeof(bool));
}

int main()
{
    // int number = 6;
    // if(isEven(number))
    //     printf("Even");
    // else
    //     printf("Odd");
    printSizeOfDT();
}