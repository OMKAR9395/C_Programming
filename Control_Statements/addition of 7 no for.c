#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,sum=0,i=0;
    for(i=1;i<=7;i++)
    {
        printf("\n Enter  a Number %d= ",i);
        scanf("%d",&no);
        sum=sum+no;             ///sum+=no
    }
    printf("\n Addition of Given Numbers =%d",sum);
    getch();
    return 0;
}
