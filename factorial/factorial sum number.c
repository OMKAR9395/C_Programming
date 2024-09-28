#include<stdio.h>
#include<conio.h>
int main()
{
   long long int Number=0,Temp=0,Dig=0,Dig_Sum=0;

    printf("\n Enter a Number To Find Its sum: ");
    scanf("%d",&Number);
    Temp=Number;
    while(Temp>0)
    {
        Dig=Temp%10;
        Dig_Sum=Dig_Sum+Dig;
        Temp=Temp/10;
    }
    printf("\n Given Number Of %d And its sum Is %d",Number,Dig_Sum);
    getch();
    return 0;
}
