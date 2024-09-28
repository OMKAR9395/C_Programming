#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Min=0;
    printf("\n Enter Elements To Find Its Minimum number");
    for(i=0;i<Size;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n You Entered Elements Are These");
    Min = Num[0];
    for(i=0;i<Size;i++)
    {
        printf("\n Value Of Element %d = %d",i+1,Num[i]);
        if(Num[i]<Min)
        {
            Min = Num[i];
        }
    }
    printf("\n %d is the Minumum Number .",Min);
    getch();
    return 0;
}

