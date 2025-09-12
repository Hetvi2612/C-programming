#include<stdio.h>
void main()
{
int ID[20],n,i,j;
printf("who is present in exclusive workshop enter their IDs:");

for(i=0;i<20;i++)
{
    scanf("%d",&ID[i]);
}
printf("enter a missing ID:");
scanf("%d",&n);
  for(j=0;j<20;j++)
{
    if(ID[j]==n)
    {
        printf("%d is available on index number %d ",ID[j],j+1);
        break;
    }
}
}
