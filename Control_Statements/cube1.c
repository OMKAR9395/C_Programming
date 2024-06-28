#include <stdio.h>
#include <conio.h>
int main()
{
    int number=0;
    long long int cube=0;
    printf("\n enter a number to find its cube : ");
    scanf("%d",&number);
    cube = number*number*number;
    printf("\n cube of %d is = %d",number,cube);
    printf("\n thanks!!");
    getch();
    return 0;
}
