#include <stdio.h>
#include <conio.h>
int main()
{
    int number, sum=0,i=0;
    printf("\n enter 10 different numbers: ");
    do
    {
        printf(" enter a number %d:",i+1);
        scanf("%d",&number);
        sum+=number;
        i++;
    }
    while(i<10);
    printf("\n total of 10 numbers is %d",sum);
    getch();
    return 0;
}
