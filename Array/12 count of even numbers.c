#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Cnt=0;
    printf("\n Enter Elements To Find count of even numbers");
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
        if(Num[i]%2==0)
        {
            Cnt++;
        }

    }
    printf("\n\n==== count of even numbers is %d.======",Cnt);
    getch();
    return 0;
}


