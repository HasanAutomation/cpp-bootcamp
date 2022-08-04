#include<iostream>

using namespace std;

void upperOrLower(int c)
{
    printf("ASCII %d ",c);
    c >= 65 && c <= 90 ? printf("Uppercase") : printf("Lowercase");
}
void upperOrLowerOrDigitOrSpecialChar(int c)
{
    printf("ASCII %d \n",c);
    if(c >= 65 && c <= 90)
        printf("Uppercase alphabet");
    else if (c >= 48 && c <= 57)
        printf("Digit");
    else if ((c >= 32 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
        printf("Special character");
    else
        printf("Lowercase alphabet");
}

int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    upperOrLowerOrDigitOrSpecialChar(c);
}