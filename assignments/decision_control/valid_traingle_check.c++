#include<iostream>

using namespace std;

bool isValidTringle(int a,int b,int c)
{
    return a != 0 && b != 0 && c != 0;
}

int main()
{
    int a,b,c;
    printf("Enter three sides of a tringle");
    scanf("%d%d%d",&a,&b,&c);
    if(isValidTringle(a,b,c))
        printf("Valid");
    else
        printf("Not valid");
}