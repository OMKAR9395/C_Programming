#include<stdio.h>
#include<conio.h>
int Fact(int);
int main()
{
    int No=0,Res=0;
    printf("\n Enter a number to find its factorial : ");
    scanf("%d",&No);
    Res = Fact(No);
    printf("\n Factorial of %d is %d",No,Res);
    getch();
    return 0;
}
int Fact(int Num)
{
    int i=0,Ans=1;
    for(i=1;i<=Num;i++)
    {
        Ans = (i*Ans);
    }
    return Ans;
}
