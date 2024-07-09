#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Min=0,Num[Size]={};
    printf("\n Enter Values To Find Minimum Numbers");
    for(i=0;i<Size;i++)
    {
        printf("\n Enter Value No %d = ",i+1);
        scanf("%d",&Num[i]);
        if(i==0|| Num[i]<Min)
        {
            Min=Num[i];
        }
    }
    getch();
    system("cls");
    printf("\n %d Is The Minimum Number",Min);
    getch();
    return 0;
}
