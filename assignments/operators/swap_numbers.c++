#include<iostream>

using namespace std;

void swapNumbers()
{
    int a = 10, b = 20 ,c;
    printf("Before swapping\n");
    printf("%d %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After swapping\n");
    printf("%d %d\n",a,b);
}

void swapNumberWithoutThirdVariable()
{
    int a = 10, b = 20 ,c;
    printf("Before swapping\n");
    printf("%d %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping\n");
    printf("%d %d\n",a,b);
}

int main()
{
    swapNumberWithoutThirdVariable();
    return 0;
}