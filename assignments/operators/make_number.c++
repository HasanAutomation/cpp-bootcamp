#include<iostream>

using namespace std;

void changeLastDigit(int number)
{
    int var = 0;
    number = number / 10;
    printf("The number is %d ",(number * 10) + var);

}

void appendDigit(int number,int digit)
{
    printf("%d%d",number,digit);
}

void calculateToUSD(int inr)
{
    float inr_amount_for_dollar = 76.23;
    printf("%0.2f",inr * inr_amount_for_dollar);
}

int main()
{
    // changeLastDigit(3215);
    // appendDigit(234,9);
    calculateToUSD(2);
    return 0;
}