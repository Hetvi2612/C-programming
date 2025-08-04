#include<stdio.h>
#define ticket 1000
void main()
{
   int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age<12)
    {
    printf("Free ticket for you.");
    }
    else
    {
    printf("you have to pay the %d .\n",ticket);
    }
}
