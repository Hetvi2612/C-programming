#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible for open saving account.");
    }
    else if(age<=0)
    {
        printf("Enter valid age.");
    }
    else
    {
        printf("You are not eligible for open saving account.");
    }

}
