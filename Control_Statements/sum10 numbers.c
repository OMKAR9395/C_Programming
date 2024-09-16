#include<stdio.h>
#include<conio.h>
int main()
{
    int numbers[10];
    int sum=0;
    printf("\n Enter 10 Employees Salary: ");
    for (int i=0; i<10;i++)
    {
        printf("\n Numbers %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    printf("\n The Salary of 10 Employees is : %d",sum);
    getch();
    return 0;
}
