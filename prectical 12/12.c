#include<stdio.h>
void main()
{
    int x;
    for(x=1;x<=50;x++)
    {
       if(x%5==0)
        {
            printf("Book ID :%d (Special Edition)\n");
            continue;
        }
      printf("Book ID :%d\n",x);
    }
    printf("this program made by hetvi dalsaniya. ");
}
