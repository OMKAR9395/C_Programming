#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,X=0;
    char Symbol;
    printf("\n Enter Row And Column Size: ");
    scanf("%d",&X);
    printf("\n Enter a Symbol Which You Want Print : ");
    scanf(" %c",&Symbol);
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(R==1 || C==X/2+1)
            {
                printf("%c ",Symbol);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
