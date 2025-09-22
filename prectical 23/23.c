#include<stdio.h>
void main()
{
    int price[25],i,max=0,min=0,a,profit,n,b,j;
    printf("Enter total number of days:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("day %d number price:",i+1);
        scanf("%d",&price[i]);
    }
    for(i=0;i<a;i++)
    {
            if(price[i]<price[i+1])
            {
            min=price[i];
            n=i;
            }
            else
            {
                max=price[i+1];
                b=j;
            }

    }

    profit=max-min;
    if(profit>0)
    {
        printf("day %d you buy the fruit\n",n+1);
        printf("day %d you sell the fruit\n",b+1);
        printf("profit=%d-%d=%d",max,min,profit);
    }
    else
    {
        printf("profit is 0");
    }

}
