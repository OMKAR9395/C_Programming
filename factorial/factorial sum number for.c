#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,D_Sum=0,Temp=0,Dig=0;
    printf("\n Enter a Number To Find Its Sum Of Factorial : ");
    scanf("%d",&No);

    for (Temp = No; Temp > 0;Temp = Temp / 10)
    {
        Dig = Temp % 10;
        D_Sum = D_Sum + Dig;

    }
    printf("\n Sum of Digits  of given Numbers %d = %d",No,D_Sum);
    getch();
    return 0;
}
