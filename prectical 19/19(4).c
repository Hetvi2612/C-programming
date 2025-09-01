#include<stdio.h>
void main()
{
    int n=4,r,c,s;
    for(r=1;r<=n;r++)
    {
        for(s=1;s<=n-r;s++)
         printf("  ");
        for(c=1;c<=r;c++)
        printf("%c ",'A'+c-1);
        for(c=r-1;c>=1;c--)
        printf("%c ",'A'+c-1);
            printf("\n");

    }
for(r=n-1;r>=1;r--)
    {
        for(s=1;s<=n-r;s++)
        printf("  ");
        for(c=1;c<=r;c++)
            printf("%c ",'A'+c-1);
       for(c=r-1;c>=1;c--)
        printf("%c ",'A'+c-1);
            printf("\n");
    }
}
