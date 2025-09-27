#include<stdio.h>
void main()
{
    int price[25],i,max,min,a,profit,n=0,j=0;
    printf("Enter total number of days:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("day %d number price:",i+1);
        scanf("%d",&price[i]);
    }
    min=price[0];
    max=price[0];
    for(i=1;i<a;i++)
    {
            if(price[i]<min)
            {
            min=price[i];
            n=i;
            }

    }
    for(i=1;i<a;i++)
    {
            if(price[i]>max)
            {
                max=price[i];
                j=i;
            }
    }

    profit=max-min;
    if(profit>0 && n<j)
    {
        printf("day %d you buy the fruit\n",n+1);
        printf("day %d you sell the fruit\n",j+1);
        printf("profit=%d-%d=%d",max,min,profit);
    }
    else
    {
        printf("profit is 0");
    }

}
