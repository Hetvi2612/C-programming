#include<stdio.h>
void main()
{
    int c,r;
    for(r=1;r<=9;r++)
    {
        for(c=1;c<=9;c++)
        {

       if(c<=5)
       {
           if(r==1 || (r>=6 && (r+c)>=10))
           {
            printf("%d ",6-c);
           }
           else if(c<r)
           {
               printf("  ");
           }

           else
           {
               printf("%d ",6-c);
           }
       }
       else
        {
          if((c>=6 && (c+r)<=10) || (r-c)>=0)
           {
               printf("%d ",c-4);
           }
        }
        }
      printf("\n");
    }
}
