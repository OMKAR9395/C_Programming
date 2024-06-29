#include<stdio.h>
#include<conio.h>
int main()
{
    int Number = 0, Rev = 0, Dig =0, Temp = 0;
    printf("\n Enter a Number To find its Reverse Number: ");
    scanf("%d",&Number);
    Temp=Number;
    while(Temp>0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10 )+ Dig;    ///Rev=(Rev*10)+(Temp%10);
        Temp = Temp / 10;
    }
    printf("\n Reverse Of Given Number is %d = %d",Number,Rev);
    getch();
    return 0;
}
