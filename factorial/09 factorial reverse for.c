#include<stdio.h>
#include<conio.h>
int main()
{
    int Number = 0, Rev = 0,Temp = 0;
    printf("\n Enter a Number to Find its Reverse Number : ");
    scanf("%d",&Number);
    for(Temp=Number;Temp>0;Rev=(Rev*10)+(Temp%10),Temp=Temp/10);
    printf("\n Given Number of Reverse is %d = %d",Number,Rev);
    getch();
    return 0;
}
