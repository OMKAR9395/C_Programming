#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Src=0,Num[Size]={},Cnt=0;
    printf("\n Enter %d Numbers",Size);
    while(i<Size)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&Num[i]);
        i++;
    }
    system("cls");
    printf("\n Enter Number Which You Find How Many  Times Executed: ");
    scanf("%d",&Src);
    i=0;
    while(i<Size)
    {
        if(Num[i] == Src)
        {
            Cnt++;
        }
        i++;
    }
    printf("\n %d is %d Times Executed",Src,Cnt);
    getch();
    return 0;
}
