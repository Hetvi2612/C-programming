#include<stdio.h>
void displayBooks();
int getTotleBook();
void borrowBook(char bookname[]);
int calculateFine(int dayslate);
void main()
{
    int a,b,book,c,i;
    char book_[30];
    printf("library management system\n");
    printf("Enter 1 for get a book list.\n");
     printf("Enter 2 for get total number of book.\n");
      printf("Enter 3 for borrow a book.\n");
       printf("Enter 4 for calculate a fine.\n");
       printf("Enter 5 for exit from program.\n");
       printf("========================\n");
     x:  printf("enter your choice :");
       scanf("%d",&book);
 switch(book)
 {
   case 1:
    displayBooks();
    goto x;
    case 2:
    a=getTotleBook();
    printf("Total number of books:%d\n",a);
    goto x;
    case 3:
        printf("enter book name: ");
        for(i=0;i<2;i++)
            {
                gets(book_);
            }
    borrowBook(book_);
    goto x;
    case 4:
        printf("enter how many days delay submit a book:");
        scanf("%d",&c);
    b=calculateFine(c);
    printf("you pay your fine Rs. %d.\n",b);
    goto x;
    case 5:
        printf("you are exit from the program.");
        break;
    default:
    printf("enter valid number ");
    goto x;

}
}
void displayBooks()
{
    printf("Book list:\n");
    printf("Let Us C\n");
    printf("Python\n");
    printf("To To Chan\n");
    printf("Ajod\n");
    printf("Hira No Khajano\n");
    printf("Saurashtrani Rasadhar\n");
    printf("Mann Ni Vani\n");
    printf("Garvi Gujarat\n");
    printf("Rich dad Poor dad\n");
    printf("To Be Come successful \n");

}
int getTotleBook()
{
int total_book;
total_book=10;
return total_book;
}
void borrowBook(char bookname[])
{
   puts(bookname);
   printf("you borrow your interested book.\n");
}

int calculateFine(int dayslate)
{
    int fine;
    fine=dayslate*50;
    return fine;

}

