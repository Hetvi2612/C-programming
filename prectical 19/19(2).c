#include <stdio.h>
void main()
{
    int c,r;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=9;c++)
        {
            if(r==1)
            {
                printf("%d ",c);
            }
            else if(c==r || c+r==10)
            {
                printf("%d ",c);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
