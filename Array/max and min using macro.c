#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0, Max=0, Min=0,Numbers[Size]={};
    printf("\n Enter 10 numbers:");
    for (i = 0; i < Size; i++)
    {
        printf("\n Enter Number %d: ", i + 1);
        scanf("%d", &Numbers[i]);
    }
    system("cls");
    Max = Numbers[0];
    Min = Numbers[0];
    for ( i = 0; i < Size; i++)
    {
        if (Numbers[i] > Max)
        {
            Max = Numbers[i];
        }
        if (Numbers[i] < Min)
        {
            Min = Numbers[i];
        }
    }
    printf("\n The maximum number is: %d", Max);
    printf("\n The minimum number is: %d", Min);
    getch();
    return 0;
}

