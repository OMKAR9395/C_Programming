#include<stdio.h>
#include<conio.h>
int main()
{
   long long int Number=0,Temp=0,Dig=0,Cnt=0;

    printf("\n Enter a Number To Find Its Count : ");
    scanf("%d",&Number);
    Temp=Number;
    while(Temp>0)
    {
        Dig=Temp%10;
        Cnt++;
        Temp=Temp/10;
    }
    printf("\n Given Number Of %d And its count Is %d",Number,Cnt);
    getch();
    return 0;
}
