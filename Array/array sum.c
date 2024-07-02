#include<stdio.h>
#include<conio.h>
int main()
{
    int Number[3]={0};
    printf("\n Enter Number 1 : ");
    scanf("%d",&Number[0]);
    printf("\n Enter Number 2 : ");
    scanf("%d",&Number[1]);
    Number[2]=Number[0] + Number[1];
    printf("\n Sum Of %d + %d =%d",Number[0],Number[1],Number[2]);
    getch();
    return 0;
}
