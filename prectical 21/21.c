#include<stdio.h>
void main()
{
    int i,d[25],p=0,n=0,o=0,e=0,t;
    for(i=0;i<25;i++)
    {
        printf("enter your %d number:",i+1);
        scanf("%d",&d[i]);
    }
    for(i=0;i<25;i++)
    {
        t=d[i];
        if(t<0)
        {
            n++;
            if(t%2==0)
                e++;
            else
                o++;
        }
        else if(t>0)
        {
            p++;
            if(t%2==0)
                e++;
            else
                o++;

        }

    }
    printf("Total number of positive numbers :%d\n",p);
     printf("Total number of nagetive numbers :%d\n",n);
      printf("Total number of odd numbers :%d\n",o);
       printf("Total number of even numbers :%d\n",e);
}
