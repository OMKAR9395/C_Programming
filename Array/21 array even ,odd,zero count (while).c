#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Even=0,Odd=0,Zero=0,Num[Size]={};
    printf("\n Enter %d Values To Find Its Odd & Even & Zero Count",Size);
    while(i<Size)
    {
        printf("\n Enter Value Number %d : ",i+1);
        scanf("%d",&Num[i]);
        if(Num[i] == 0)
        {
            Zero++;
        }
        else if(Num[i]%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        i++;
    }
    system("cls");
    printf("\n %d zero Numbers In that Prograssm",Zero);
    printf("\n %d Even Numbers In that Program",Even);
    printf("\n %d Odd Numbers In that Program",Odd);
    getch();
    return 0;
}

