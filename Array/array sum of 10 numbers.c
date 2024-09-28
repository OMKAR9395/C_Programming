#include<stdio.h>
#include<conio.h>
int main()
{
    int Bill[11]={};
    printf("\n Enter Bill No 1 Amount : ");
    scanf("%d",&Bill[0]);

    printf("\n Enter Bill No 2 Amount : ");
    scanf("%d",&Bill[1]);

    printf("\n Enter Bill No 3 Amount : ");
    scanf("%d",&Bill[2]);

    printf("\n Enter Bill No 4 Amount : ");
    scanf("%d",&Bill[3]);

    printf("\n Enter Bill No 5 Amount : ");
    scanf("%d",&Bill[4]);

    printf("\n Enter Bill No 6 Amount : ");
    scanf("%d",&Bill[5]);

    printf("\n Enter Bill No 7 Amount : ");
    scanf("%d",&Bill[6]);

    printf("\n Enter Bill No 8 Amount : ");
    scanf("%d",&Bill[7]);

    printf("\n Enter Bill No 9 Amount : ");
    scanf("%d",&Bill[8]);

    printf("\n Enter Bill No 10 Amount : ");
    scanf("%d",&Bill[9]);
    Bill[10]=Bill[0]+Bill[1]+Bill[2]+Bill[3]+Bill[4]+Bill[5]+Bill[6]+Bill[7]+Bill[8]+Bill[9];
    printf("\n Sum of 10  Bills is = %d",Bill[10]);
    getch();
    return 0;

}
