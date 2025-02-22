#include<stdio.h>
#include<conio.h>
void printtable(int n);
int main()
{
    int n=0;
    printf("\n Enter Number : ");
    scanf("%d",&n);
    printtable(n);
    return 0;
}
void printtable(int n)
{
    for(int i=1;i<=10;i++)
    {
         printf("\n %d",i*n);
    }
}
