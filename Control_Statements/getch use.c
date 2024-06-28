#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char ch = 'A';
    printf("\n Value Of Character = %c.\n\n",ch);
    printf("\n Enter Any Key To Move On ...");
    getch();
    system("cls");
    printf("\n Enter New Character Value : ");
    ch = getche();
    printf("\n\n New value of Character = %c.\n",ch);
    printf("\n Thanks For Using Our App\n Press a Any Key To Exit.");
    getch();
    return;
}
