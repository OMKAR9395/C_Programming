#include<stdio.h>
#include<conio.h>
int main()
{
    int number, range;
    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d",&number);
    printf("Enter the number for the multiplication table(upto which number you want to multiply): ");
    scanf("%d",&range);
    printf("\n Multiplication table for %d:",number);
    for(int i=1; i<= range; i++)
    {
        printf("\n%d * %d = %d",number,i,number*i);
    }
    printf("\n Thanks!");
    getch();
    return 0;
}
