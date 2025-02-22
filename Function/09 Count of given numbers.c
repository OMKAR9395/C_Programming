#include<stdio.h>
#include<conio.h>
int Count(int);
int main()
{
    int No=0,Res=0;
    printf("\n Enter a Number : ");
    scanf("%d",&No);
    Res = Count(No);
    printf("\n Count of Given Numbers %d is = %d ",No,Res);
    getch();
    return 0;
}
int Count(int Num)
{
    int Cnt = 0;
    while(Num != 0)
    {

        Cnt++;
         Num = Num / 10;



    }
     return Cnt;
}
