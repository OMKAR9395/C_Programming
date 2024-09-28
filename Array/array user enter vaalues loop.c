#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No[10]={},i=0;
    printf("\n Enter Value of 10  integers");
    for (i=0;i<10;i++)
    {
        printf("\n Enter No %d: ",i+1);
        scanf("%d",&No[i]);
    }
    getch();
    system ("cls");
    printf("\n You Entered Values Are Given ");
    for (i=0;i<10;i++)
    {
      printf("\n Value of %d is : %d",i+1,No[i]);
    }
    getch();
    return 0;
}
