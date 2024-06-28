#include<stdio.h>
#include<conio.h>
int main()
{
    int numbers[10];
    int sum=0;
    printf("\n enter 10 employees salary: ");
    for (int i=0; i<10;i++)
    {
        printf("\n numbers %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    printf("\n the salary of 10 employees is : %d",sum);
    getch();
    return 0;
}
