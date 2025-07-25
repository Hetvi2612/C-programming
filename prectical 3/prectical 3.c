#include<stdio.h>
//This program about a calculate BMI.
void main()
{
    double weight,height,BMI;
    printf("calculate for  BODY MASS INDEX");
    printf("enter your weight in kilograms : ");
    scanf("%lf",&weight);
    printf("enter your height in meter: ");
    scanf("%lf",&height);
    BMI=weight/(height*height);
    printf("your BMI is: %lf",BMI);
    printf("This program is made by Dalsaniya Hetvi_25TKOF");
    if(BMI<18.5)
    {
        printf("You are under weight");
    }
    else if(BMI>18.5 &  BMI<24.5)
{
    printf("You are healthy weight .");
}
    else if(BMI>24.9 & BMI<29.9)
    {
        printf("you are over weight");
}
   else if(BMI>29.8 & BMI<39.9)
   {
       printf("you are obesity");
   }
   else if(BMI>39.9)
   {
       printf("you are sever obesity.");
   }
 return 0;
}
