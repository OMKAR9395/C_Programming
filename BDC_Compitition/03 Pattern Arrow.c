#include<stdio.h>
#include<conio.h>

int main() 
{
    int i=0, j=0, spaces=0, n=0;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (spaces = n - i; spaces > 0; spaces--) 
        {
            printf("  "); 
        }
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

  
    for (i = n - 1; i >= 1; i--) 
    {
        for (spaces = n - i; spaces > 0; spaces--) 
        {
            printf("  "); 
        }
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
