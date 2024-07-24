#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10;
    int *Ptr = &x;
    printf("\n Value of x: %d",*Ptr);
    printf("\n Address of x : %d",&x);
    printf("\n value of pointer (address of x):%d ",&Ptr);
    getch();
    return 0;
}
