#include<stdio.h>
#include<conio.h>
int main()
{
   long long int  Number=0;
   int Temp=0,Dig=0,Cnt=0,U_No=0;

    printf("\n Enter a Number : ");
    scanf("%d",&Number);
    printf("\n Enter A Digit To Find How Many Times : ");
    scanf("%d",&U_No);
    Temp=Number;
    while(Temp>0)
    {
        Dig=Temp%10;
        if(Dig==U_No)
        {
            (Cnt++);
        }
        Temp=Temp/10;
    }
    printf("\n Given Number Of %d And its find of %d is %d",Number,U_No,Cnt);
    getch();
    return 0;
}
