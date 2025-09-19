#include<stdio.h>
void main()
{
    int r=1,c=1,x=1,y=1,s,j[10],i[10];

    printf("enter number of reserved seat:");
    scanf("%d",&s);
 for(r=1;r<=s;r++)
 {
     printf("Enter row and seat number %d :(e.g.2 5)",r);
    scanf("%d %d",&i[r],&j[c]);
    c++;
    printf("\n");
 }

printf("seating chart:\n");
     for(r=1;r<=5;r++)
    {
        printf("ROW %d :",r);
        for(c=1;c<=10;c++)
        {
            if(i[y]==r && j[x]==c)
               {
                   printf(" X ");
                    y++;
                    x++;
               }
                else
                {
                  printf(" 0 ");
                }
        }

        printf("\n");
    }



}




