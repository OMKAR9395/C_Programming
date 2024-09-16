#include <stdio.h>
#include <conio.h>
int main()
{
    int number=0;
    long long int cube=0;
    printf("\n eEter a Number to find its cube : ");
    scanf("%d",&number);
    cube = number*number*number;
    printf("\n Cube of %d is = %d",number,cube);
    printf("\n Thanks!!");
    getch();
    return 0;
}
