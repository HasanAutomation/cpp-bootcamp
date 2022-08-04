#include<iostream>

using namespace std;


int greatest(int a,int b,int c)
{
    if(a > b)
        if(a> c)
            return a;
        else
            return c;
    else
        if(b > c)
            return b;
        else
            return c;
}
int greatestUsingTernary(int a,int b,int c)
{
    return a > b ? a > c ? a : c : b > c ? b : c;
}

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    printf("Greatest number is %d ",greatestUsingTernary(a,b,c));
    return 0;

}