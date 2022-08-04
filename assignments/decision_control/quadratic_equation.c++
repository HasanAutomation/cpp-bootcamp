#include<iostream>

using namespace std;


bool realAndDistinct(int a,int b,int c)
{
    return b * b - (4*a*c) > 0;
}
bool realAndEqual(int a,int b,int c)
{
    return b * b - (4 * a * c) == 0;
}

bool imaginary(int a,int b,int c)
{
    return b * b - (4 * a * c) < 0;
}


int main()
{
    int a,b,c;
    printf("Enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(realAndDistinct(a,b,c))
        printf("It has real and distinct roots");
    else
        printf("It doesn't have real and distinct roots");
}