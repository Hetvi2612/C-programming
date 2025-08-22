#include<stdio.h>
void main()
{
    int m=21,user,computer,n=0;
    printf("Rules:\n\n");
    printf("1. The game starts with 21 matchsticks.\n");
    printf("2. The user is asked to pick 1, 2, 3, or 4 matchsticks.\n");
    printf("3. After the user picks, the computer makes its pick.\n");
    printf("4. The player who is forced to pick the last matchstick loses the game.\n\n");
    printf("instruction:\n");
    printf("Press 1  for pick up 1 matchstick.\n");
    printf("Press 2  for pick up 2 matchstick.\n");
    printf("Press 3  for pick up 3 matchstick.\n");
    printf("Press 4  for pick up 4 matchstick.\n");
    printf("Let's play a game.\n");
    printf("GOOD LUCK!!\n");

    while(m>1)
    {
        printf("There are %d matchsticks remaining.\n",m);
        printf("How many matchstick you picked up?\n");
        printf("Enter:");
        scanf("%d",&user);

        if(user==1)
        {
            printf("you picked 1 matchstick.\n");
            m=m-1;

        }
        else if(user==2)
        {
            printf("you picked 2 matchsticks.\n");
            m=m-2;

        }
        else if(user==3)
        {
            printf("you picked 3 matchstick.\n");
            m=m-3;
        }
        else if(user==4)
        {
            printf("you picked 4 matchstick.\n");
            m=m-4;
        }
        else
        {
            printf("Read a instruction carefully.\n");
        }


        if(user==1 || user==2 || user==3 || user==4)
        {


            n=(m-1)%5;
            if(n==0)
            {
                m=m-1;
            }
            m=m-n;
            printf("computer picked %d matchsticks.\n",n);
        }

    }
    if(m==1)
    {
        printf("you picked last 1 matchstick.\n");
        printf("you lose a game.\n");
    }
    printf("this program made by Dalsaniya Hetvi.");
    return 0;


}

