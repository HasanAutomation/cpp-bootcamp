#include<iostream>

using namespace std;

void isPassed(int mark)
{
     mark > 33 ? printf("Passed ") : printf("Failed ");
}

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    isPassed(a);
    isPassed(b);
    isPassed(c);
    isPassed(d);
    isPassed(e);


}