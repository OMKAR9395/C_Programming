#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int No1 = 0, No2 = 0;
    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&sNo2);
    printf("\n\n Given Number Before swap \n Number1 = %d,Number2= %d.",No1,No2);
    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;
    printf("\n\n Given Numbers After Swap \n Number1 = %d,Number2 = %d.",No1,No2);
    getch();
    return 0;
}
