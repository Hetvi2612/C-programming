#include<stdio.h>
#define p printf
void main()
{
    char note[100],rev[100],n[100];
    int a,i,l=0,j=0,s=0;
    p("====================NOTES=======================\n");
    p("Enter 1 for Count a Length of Note\n");
    p("Enter 2 for Reverse a Note\n");
    p("Enter 3 for Compare Two Notes\n");
    p("Enter 4 for Copy a Note\n");
    p("Enter 5 for Concatenate Notes\n");
    p("Enter 6 for Concatenate Notes to Upper Case\n");
    p("Enter 7 for Concatenate Notes to Lower Case\n");
    p("Enter 8 for Capitalize each word of Notes\n");
    p("Enter 9 for Exit form Notes\n");
    p("==============================================\n");
    p("Enter your note:");
    gets(note);
    x: p("Enter Number:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
           for(i=0;note[i]!='\0';i++)
           {
             l++;
           }
           p("your note length with including space is %d\n",l);
        goto x;
        case 2:
                l=0;
                j=0;
            for(i=0;note[i]!='\0';i++)
            {
             l++;
            }
           for(i=0;note[i]!='\0';i++)
            {
            j=l-i-1;
            rev[i]=note[j];
            }
            rev[l]='\0';
            puts(rev);
            p("\n");
        goto x;
        case 3:
            l=0;
            j=0;
            p("Enter second note:");
            for(i=0;i<2;i++)
            {
                gets(n);
            }

            for(i=0;n[i]!='\0';i++)
             {
              l++;
             }
             p("\n");
            for(i=0;note[i]!='\0';i++)
            {
                if(note[i]-n[i]!=0)
                {
                    p("both notes are not same\n");
                    break;
                }
                else
                    {
                        j++;
                    }
            }
            if(j==l)
            {
                p("both notes are same\n");
            }
        goto x;
        case 4:
            puts(note);
            p("\n");
        goto x;
        case 5:
            p("enter your second note:");
            for(i=0;i<2;i++)
            {
            gets(n);
            }
            for(i=0;note[i]!='\0';i++)
            {
                rev[i]=note[i];
            }
            for(j=0;n[j]!='\0';j++)
            {
                rev[i]=n[j];
                i++;
            }
            rev[i]='\0';
            puts(rev);
            p("\n");
            goto x;
        case 6:
            for(i=0;note[i]!='\0';i++)
            {
                n[i]=note[i];
            }
            n[i]='\0';
            for(i=0;n[i]!='\0';i++)
            {
                if(note[i]>='a' && note[i]<='z')
                {
                    n[i]=n[i]-32;
                }
            }
            puts(n);
            p("\n");
        goto x;
        case 7:
            for(i=0;note[i]!='\0';i++)
            {
                n[i]=note[i];
            }
            n[i]='\0';
             for(i=0;n[i]!='\0';i++)
            {
                if(note[i]>='A' && note[i]<='Z')
                {
                    n[i]=n[i]+32;
                }
            }
            puts(n);
            p("\n");
        goto x;
        case 8:
            for(i=0;note[i]!='\0';i++)
            {
                n[i]=note[i];
            }
            n[i]='\0';
            for(i=0;note[i]!='\0';i++)
            {
                if(note[i]==' ')
                {
                    s++;
                }
                else if(i==0)
                {
                    if(note[i]>='a' && note[i]<='z')
                    {
                        n[i]=note[i]-32;
                    }
                }
                else
                {
                    if(s>0)
                    {
                        if(note[i]>='a' && note[i]<='z')
                        {
                            n[i]=note[i]-32;
                            s--;
                        }
                    }
                    else
                    {
                        if(note[i]>='A' && note[i]<='Z')
                        {
                            n[i]=note[i]+32;
                        }
                    }
                }
            }
                puts(n);
                p("\n");
            goto x;
        case 9:
            p("you are exit from the program.\n");
        break;
        default:
            p("enter valid number:\n");
            goto x;
        }
}
