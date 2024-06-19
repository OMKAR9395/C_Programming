#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,sum=0,i=0;
    for(i=1;i<=7;i++)
    {
        printf("\n enter  a number %d= ",i);
        scanf("%d",&no);
        sum=sum+no;             ///sum+=no
    }
    printf("\n addition of given numbers =%d",sum);
    getch();
    return 0;
}
