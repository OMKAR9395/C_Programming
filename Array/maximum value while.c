#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Max=0;
    printf("\n =============Enter %d Values================",Size);
    while(i<Size)
    {
        printf("\n Enter Value No %d= ",i+1);
        scanf("%d",&Num[i]);
        if(i==0 || Num[i]>Max)
        {
            Max = Num[i];
        }
        i++;
    }
    system("cls");
    printf("\n The Maximum Number is %d ",Max);
    getch();
    return 0;
}
