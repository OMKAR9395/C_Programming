#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Res=0;
    printf("\n Enter A Number :");
    scanf("%d",&No);
    Res = No >>4;
    printf("\n Result Right Shift By 4>> %d",Res);

    getch();
    return 0;
}
