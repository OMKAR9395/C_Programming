#include<stdio.h>
#include<conio.h>
int main()
{
    int n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,sum = 0;
    printf("\n Enter a Number 1= ");
    scanf("%d",&n1);
    printf("\n Enter a Number 2= ");
    scanf("%d",&n2);
    printf("\n Enter a Number 3= ");
    scanf("%d",&n3);
    printf("\n Enter a Number 4= ");
    scanf("%d",&n4);
    printf("\n Enter a Number 5= ");
    scanf("%d",&n5);

    sum = n1 + n2 + n3 + n4 + n5;

    printf("\n Addition of %d,%d,%d,%d,%d is = %d",n1,n2,n3,n4,n5,sum);
    getch();
    return 0;
}
