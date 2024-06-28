#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = 'A';
    printf("\n Value of character = %c.\n\n",ch);
    printf("\n Enter a New character Value : ");
    ch = getche(); ///scanf("%c",&ch); ///ch = getch(); ///ch = getchar();
    printf("\n\n New value of character is = %c\n",ch);
    printf("\n\n Thanks for Using Our App.\n Press a Key To Exit");
    getch();
    return 0;
}
