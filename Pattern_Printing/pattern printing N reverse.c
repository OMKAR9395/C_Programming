#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0,X=0;
    printf("\n Enter Row And Column Size: ");
    scanf("%d",&X);
    printf("\n \n==============**Pattern Printing**==============\n\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(C==1 || C==X || R+C==X+1)
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
    printf("\n\n =============OMKAR MOHITE =============\n\n");
    getch();
    return 0;
}
