#include<stdio.h>

void pattern1()
{
    int row,col;
    printf("Enter values for rows and columns:\n");
    scanf("%d%d",&row,&col);
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            if(j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pattern2()
{
    int row,col;
    printf("Enter values for rows and columns:\n");
    scanf("%d%d",&row,&col);
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            if(j >= (row + 1) - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pattern3()
{
    int row,col;
    printf("Enter values for rows and columns:\n");
    scanf("%d%d",&row,&col);
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            if(j <= (row + 1) - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pattern4()
{
    int row,col;
    printf("Enter values for rows and columns:\n");
    scanf("%d%d",&row,&col);
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= col ; j++)
        {
            if(j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void pattern5()
{
    int row;
    printf("Enter values for rows\n");
    scanf("%d",&row);
    for(int i = 1 ; i <= row ; i++)
    {
        for(int j = 1 ; j <= row + 3 ; j++)
        {
            if(j >= (row + 1) - i && j <= (row + i) - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


int main()
{
    pattern5();
}