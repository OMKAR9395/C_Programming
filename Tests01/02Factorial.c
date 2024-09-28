//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  Writw a program to find of factorial of given number .              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int Fact=0, Temp=0, Num=0;

    printf("\n Enter a Number :");
    scanf("%d",&Fact);

    Temp = Fact;
    Num = 1;
    while(Temp > 0)
    {
        Num = Num * Temp;
        Temp--;
    }
    printf("\n %d of Factorial is = %d", Fact,Num);

    getch();
    return 0;
}