#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Zero=0,Even=0,Odd=0;
    printf("\n ==========Enter Elements ============");
    for(i=0;i<Size;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n You Entered Elements Are These");
    for(i=0;i<Size;i++)
    {
        printf("\n Value Of Element %d = %d",i+1,Num[i]);
        if(Num[i]==0)
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
    }
    printf("\n count of Zseroes is = %d",Zero);
    printf("\n count of Even Number is = %d",Even);
    printf("\n count of Odd Number is = %d",Odd);
    getch();
    return 0;
}

