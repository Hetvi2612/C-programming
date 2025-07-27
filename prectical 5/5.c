#include<stdio.h>
void main()
{

    long long Population,Men,Women,Litracy,Illitracy,Illiterate_Men,Illiterate_Women,Literate_Men,Literate_Women;
    Population=1441981744;
    Women=Population*(48.8/100);
    printf("The total number of women: %lld",Women);
    Men=Population-Women;
    printf("The total number of men: %lld",Men);
    Litracy=Population*(85.95/100);
    printf(" The total literate population is: %lld",Litracy);
    Illitracy=Population-Litracy;
    printf(" The total illiterate population is: %lld",Illitracy);
    Literate_Men=Men*(80.95/100);
    printf(" The total literate men are: %lld",Literate_Men);
    Literate_Women=Women*(62.84/100);
    printf("The total literate women are: %lld ",Literate_Women);
    Illiterate_Men=Men-Literate_Men;
    printf(" The total illiterate men are: %lld",Illiterate_Men);
    Illiterate_Women=Women-Literate_Women;
    printf(" The total illiterate women are: %lld",Illiterate_Women);
    printf("This program is developed by HETVI DALSANIYA 25TCEKOF");
    return 0;
}
