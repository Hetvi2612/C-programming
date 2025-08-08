#include<stdio.h>
void main()
{
    int n;
    float total_balance=5000,withdraw_amount;
x:
    printf("Press 1 for withdraw amount.\n");
    printf("Press 0 for exit.\n");
    scanf("%d",&n);

    while(1)
    {



        switch(n)
        {
        case 1:
            printf("Enter your withdraw amount:\n");
            scanf("%f",&withdraw_amount);


            if(total_balance>=withdraw_amount)
            {
                total_balance=total_balance-withdraw_amount;
                printf("your remaing balance :%.2f \n",total_balance);

                goto x;
            }
            else
            {
                printf("your withdraw amount is more than your balance.");
            }
            break;

        case 0:
            printf("thank you for visit.");
            return 1;
            break;

        }
    }
}
