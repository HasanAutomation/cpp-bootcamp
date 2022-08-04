#include<stdio.h>

void printMySirG()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        printf("MySirG\n");
    }
}

void naturalNumbers()
{
    for(int i = 1 ; i<= 10 ; i++)
    {
        printf("%d ",i);
    }
}

void naturalNumbersInReverse()
{
    for(int i = 10 ; i>= 1 ; i--)
    {
        printf("%d ",i);
    }
}

void printFirstTenOddNumbers()
{
    for(int i = 1 ; i <= 20 ; i++)
    {
        if( i % 2 !=0)
        {
            printf("%d ",i);
        }
    }
}

void printFirstTenOddNumbersInReverse()
{
    for(int i = 20 ; i>= 1 ; i--)
    {
        if(i % 2 != 0)
        {
            printf("%d ",i);
        }
    }
}

void printFirstTenEvenNumbers()
{
    for(int i = 1 ; i <= 20 ; i++)
    {
        if( i % 2 ==0)
        {
            printf("%d ",i);
        }
    }
}

void printFirstTenEvenNumbersInReverse()
{
    for(int i = 20 ; i>= 1 ; i--)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
}

void printSquareTenNaturalNumbers()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d ", i * i);
    }
}
void printCubeTenNaturalNumbers()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d ", i * i * i);
    }
}

void printTableFive()
{
    int number = 5;
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d X %d = %d \n",number,i,number * i);
    }
}

int main()
{
    printMySirG();
    naturalNumbers();
    printf("\n");
    naturalNumbersInReverse();
    printf("\n");
    printFirstTenOddNumbers();
    printf("\n");
    printFirstTenOddNumbersInReverse();
    printf("\n");
    printFirstTenEvenNumbers();
    printf("\n");
    printFirstTenEvenNumbersInReverse();
    printf("\n");
    printSquareTenNaturalNumbers();
    printf("\n");
    printCubeTenNaturalNumbers();
    printf("\n");
    printTableFive();


}