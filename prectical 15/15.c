#include<stdio.h>
void main()
{
   int s;
    printf("enter your countdown second:");
    scanf("%d",&s);
    while(s>=0)
    {
        sleep(1);
        printf("%d\n\a",s);
        s--;
    }
    printf("countdown is finish.");
}
