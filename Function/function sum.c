#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{
    int a=0,b=0;
    printf("\n Enter First Number : ");
    scanf("%d",&a);
    printf("\n Enter Second Number : ");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("\n sum of %d + %d = %d",a,b,s);
    getch();
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
