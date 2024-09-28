#include<stdio.h>
#include<conio.h>
int main()
{
   long long int  Number=0;
   int Temp=0,Dig=0,Cnt=0;

    printf("\n Enter a Number To Find how many even numbers: ");
    scanf("%d",&Number);
    Temp=Number;
    while(Temp>0)
    {
        Dig=Temp%10;
        if(Dig %2 ==1 && Dig != 0)
        {
            (Cnt++);
        }
        Temp=Temp/10;
    }
    printf("\n Given Number Of %d And its count of even numbers is = %d",Number,Cnt);
    getch();
    return 0;
}
