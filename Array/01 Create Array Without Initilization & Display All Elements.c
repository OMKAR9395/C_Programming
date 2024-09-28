#include<stdio.h>
#include<conio.h>
int main()
{
    int num[10]={},i=0;
    printf("\n Enter 10 Numbers : ");
    for(i=0;i<10;i++)
    {
     printf("\n Enter %d Numbers : ",i+1);
     scanf("%d",&num[i]);
    }
    printf("\n the Number You entered are: ");
    for(i=0;i<10;i++)
    {
        printf("\n You entered  %d number is : %d",(i+1),num[i]);
    }
    getch();
    return 0;
}
