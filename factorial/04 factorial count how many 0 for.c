#include<stdio.h>
#include<conio.h>
int main()
{
   long long int  Number=0 ,Temp=0;
   int Dig=0,Cnt=0;

    printf("\n Enter a Number To Find how many 0 : ");
    scanf("%d",&Number);

    for(Temp=Number;Temp>0;Dig=Temp%10,Temp=Temp/10)
        if(Dig==0)
        {
            (Cnt++);
        }
    printf("\n Given Number Of %d And its count of 0 is %d",Number,(Cnt - 1));
    getch();
    return 0;
}

