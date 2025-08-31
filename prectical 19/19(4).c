#include<stdio.h>
void main()
{
    int c,r;
    char A;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            if(r==1 && c==4)
            {
                printf("%c ",A);
                A++;
            }

        }
    }
}
