#include<stdio.h>
#include<conio.h>
int main()
{
    int number[8]={12,45,25,36,56,85,45,22},i=0;
    printf("\n The initial  value of 8 these are: ");
    for(i=0;i<8;i++)
    {
        printf("\n Number of initialized value is %d = %d",(i+1),number[i]);
    }
    getch();
    return 0;
}
