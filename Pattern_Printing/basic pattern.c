#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0, X=0;
    printf("\n Enter Row & Column Size: ");
    scanf("%d",&X);
    printf("\n\n==============Basic Pattern==============\n\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n===============Thanks!==============");
    getch();
    return 0;
}
