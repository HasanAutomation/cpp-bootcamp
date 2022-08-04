#include<iostream>

using namespace std;

void numberOfDaysMonth(int monthNumber)
{
    /*
     0 -> January -> 31
     1 -> February => 28
     2 -> March => 31
     3 -> April => 30
     4 -> May -> 31
     5 -> June -> 30
     6 -> July -> 31
     7 -> August -> 31
     8 -> September -> 30
     9 -> October -> 31
     10 -> November -> 30
     11 -> December -> 31
    
    */
   int jan = 31;
   int feb = 28;
   int mar = 31;
   int april = 30;
   int may = 31;
   int june = 30;
   int july = 31;
   int aug = 31;
   int sep = 30;
   int oct = 31;
   int nov = 30;
   int dec = 31;
   switch(monthNumber)
   {
    case 0:
        printf("Total Number of Days %d ",jan);
        break;
    case 1:
        printf("Total Number of Days %d ",feb);
        break;
    case 2:
        printf("Total Number of Days %d ",mar);
        break;
    case 3:
        printf("Total Number of Days %d ",april);
        break;
    case 4:
        printf("Total Number of Days %d ",may);
        break;
    case 5:
        printf("Total Number of Days %d ",june);
        break;
    case 6:
        printf("Total Number of Days %d ",july);
        break;
    case 7:
        printf("Total Number of Days %d ",aug);
        break;
    case 8:
        printf("Total number of days %d",sep);
        break;
    case 9:
        printf("Total number of days %d",oct);
        break;
    case 10:
        printf("Total number of days %d",nov);
        break;
    case 11:
        printf("Total number of days %d",dec);
        break;
    default:
        printf("Enter a valid month number");
        
   }
}

int main()
{
    int number;
    printf("Enter a month number");
    scanf("%d",&number);
    numberOfDaysMonth(number);
}