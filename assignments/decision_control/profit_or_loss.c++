#include<iostream>
using namespace std;

int profitOrLoss(int cp,int sp)
{
   return sp - cp;

}

int main()
{
    int cp,sp;
    printf("Enter cost price and selling price:");
    scanf("%d%d",&cp,&sp);
    int lossOrprofit = profitOrLoss(cp,sp);
    if(lossOrprofit > 0)
        printf("The profit is %d ",lossOrprofit);
    else
        printf("The loss is %d ",abs(lossOrprofit));
}