#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,X=0;
    printf("\n Enter Row & Column Size: ");
    scanf("%d",&X);
    printf("\n\n============Pattern L=============\n\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(R==1||C==X/2+1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n===============Omkar Mohite===============\n\n");
    getch();
    return 0;
}
