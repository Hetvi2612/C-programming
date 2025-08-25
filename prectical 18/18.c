#include<stdio.h>
void main()
{ int r,c,a,v,h;
    printf("Enter the size of table vertically: ");
    scanf("%d",&v);
    printf("\nEnter the size of table horizontally:");
    scanf("%d",&h);
    printf("\n multiplication table:(%d * %d)\n",v,h);
    for(c=1;c<=v;c++)
    {
        for(r=1;r<=h;r++)
        {
            a=c*r;
            printf("%d\t",a);
        }
        printf("\n");
    }
    printf("This program is made by Hetvi Dalsaniya.");
}
