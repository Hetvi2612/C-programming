#include<stdio.h>
void main()
{

    int minutes=1;
    float distance=0.50;
    printf("ON YOUR MARKS GET SET GO!\n");
    printf("marathon start!!!!!\n");
    while (distance<=10)
    {
        sleep(1);
        printf("Minute %d: Distance covered = %.2f Km\n",minutes,distance);
        minutes++;
        distance=distance+0.50;
    }
printf("Marathon complete! \n");
printf("This program is prepared by hetvi dalsaniya.\n");
return 0;
}
