#include<stdio.h>
void main()
{
    int m;
    printf("Enter Your Marks:");
    scanf("%d",&m);
   (m>=90)?printf("Grade A"):
            (m>=80 && m<90)?printf("Grade B"):
                (m>=70 && m<80)?printf("Grade C"):
                    (m>=60)?printf("Grade D "):printf("Grade F");


}
