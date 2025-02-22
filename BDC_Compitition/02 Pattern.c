#include<stdio.h>
#include<conio.h>
int main() 
{
    int rows=0, i = 0, j=0, coef=0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    while (i < rows) 
    {

        int space = 1;
        while (space <= rows - i) 
        {
            printf("  ");
            space++;
        }

        j = 0;
        coef = 1;
        while (j <= i) 
        {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
            j++;
        }

        printf("\n");
        i++;
    }

    getch();
    return 0;
}
