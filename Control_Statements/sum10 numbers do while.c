#include <stdio.h>
#include <conio.h>
int main()
{
    int number, sum=0,i=0;
    printf("\n Enter 10 Different Numbers: ");
    do
    {
        printf(" Enter a Number %d:",i+1);
        scanf("%d",&number);
        sum+=number;
        i++;
    }
    while(i<10);
    printf("\n Total of 10 Numbers is %d",sum);
    getch();
    return 0;
}
