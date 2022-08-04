#include<stdio.h>

int main()
{
    char str[10] = {'B','H','O','P','A','L'};

    int length = 0 ,i = 0;

    while(str[i])
    {
        length++;
        i++;
    }
    printf("Length is %d ",length);

}