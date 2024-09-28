#include<stdio.h>
#include<conio.h>
int Book_Read(int);
int main()
{
    int No = 0,Res = 0;
    printf("\n You Read First Day Pages Count: ");
    scanf("%d",&No);

    Res = Book_Read(No);

    printf("\n You Readed Total Pages = %d",Res);
    getch();

    printf("\n You Read Second Day Pages Count: ");
    scanf("%d",&No);
    Res = Book_Read(No);

    printf("\n You Readed Total Pages = %d",Res);
    getch();

    printf("\n You Read Third Day Pages Count: ");
    scanf("%d",&No);
    Res = Book_Read(No);

    printf("\n You Readed Total Pages = %d",Res);

    getch();
    return 0;
}
int Book_Read(int Num)
{
    int No = 10;
    No = No + Num;
    return No;
}
