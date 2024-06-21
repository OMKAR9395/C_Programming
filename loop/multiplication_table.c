#include <stdio.h>
#include <conio.h>
int main()
{
    int number,range;
    printf("enter the number which you want multiplication table: ");
    scanf("%d",&number);;
    printf("enter the number for the multiplication table(up to which you want to multiply): ");
    scanf("%d",&range);
    printf("\n multiplication table for %d:",number);
    for(int i=1; i<= range;i++)
    {
        printf("\n %d * %d = %d",number,i,number*i);
    }
    printf("\n thanks!");
    getch();
    return 0;
}
