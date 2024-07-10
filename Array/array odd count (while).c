#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Cnt=0,Num[Size]={};
    printf("\n Enter %d Values To Find Its Odd Count",Size);
    while(i<Size)
    {
        printf("\n Enter Value Number %d : ",i+1);
        scanf("%d",&Num[i]);
        if(Num[i] % 2 == 1)
        {
            Cnt++;
        }
        i++;
    }
    system("cls");
    printf("\n %d Odd Numbers In that Program",Cnt);
    getch();
    return 0;
}
