#include<conio.h>
#include<stdio.h>
int main()
{
    int R=0,C=0,X=0;
    printf("\n Enter Row & Column Size: ");
    scanf("%d",&X);
    printf("\n\n==============**Pattern Reverse Z**===============\n\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(R==1 || R==X || R==C)
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
    printf("\n\n===============**Thanks!!**===============\n\n");
    getch();
    return 0;
}
