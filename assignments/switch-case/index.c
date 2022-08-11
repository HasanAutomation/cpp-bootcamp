#include<stdio.h>
#include<stdlib.h>


void menuDriven()
{
    int a,b,c;
    printf("1. Addition:\n");
    printf("2. Subtraction:\n");
    printf("3. Multiplication:\n");
    printf("4. Division:\n");
    printf("5. Exit:\n");
    

    while(1)
    {
        int serialNumber;
        printf("Enter a serial number:\n");
        scanf("%d",&serialNumber);
        switch(serialNumber)
        {
            case 1:
                printf("Enter two numbers:\n");
                scanf("%d%d",&a,&b);
                c = a + b;
                printf("Sum is %d\n",c);
                break;
            case 2:
                printf("Enter two numbers:\n");
                scanf("%d%d",&a,&b);
                c = a - b;
                printf("Subtraction is %d\n",c);
                break;
            case 3:
                printf("Enter two numbers:\n");
                scanf("%d%d",&a,&b);
                c = a * b;
                printf("Multiplication is %d\n",c);
                break;
            case 4:
                printf("Enter two numbers:\n");
                scanf("%d%d",&a,&b);
                c = a / b;
                printf("Division is %d\n",c);
                break;
            case 5:
                exit(0);
            default:
                printf("Please provide a correct input\n");
        }
    }
}


int main()
{
    menuDriven();
}