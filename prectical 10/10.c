#include<stdio.h>
void main()
{
    int a,total=0;

    printf("Enter 1 for Burger Rs 150.\n");
    printf("Enter 2 for Pizza Rs 200.\n");
    printf("Enter 3 for Pasta Rs 120.\n");
    printf("Enter 4 for Sandwich Rs 100.\n");
    printf("Enter 5 for French Fries Rs 80.\n");
   x: printf("\nEnter your food number between 1 to 5:\n");
    scanf("%d",&a);
    switch(a){
           case 1:
               total=total+150;
               printf("you order burger.\n");
               printf("If your order is finish enter 0.\n");
               goto x;
               break;
           case 2:
             total=total+200;
             printf("you order pizza.\n");
             printf("If your order is finish enter 0.\n");
             goto x;
             break;
           case 3:
            total=total+120;
            printf("you order pasta.\n");
            printf("If your order is finish enter 0.\n");
            goto x;
            break;
           case 4:
            total=total+100;
            printf("you order sandwich.\n");
            printf("If your order is finish enter 0.\n");
            break;
            goto x;
           case 5:
            total=total+80;
            printf("you order french fries.\n");
            printf("If your order is finish enter 0.\n");
            goto x;
            break;
           case 0:
            printf("your order is finish.\n");
            printf("your total bill amount:%d Rs",total);
            break;
           default:
            printf("enter 1 to 5");
             }

}
