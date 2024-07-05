#include <stdio.h>

int main()
{
    int num[7] = {0},i=0;
    printf("\n The null values these are: ");
    for (i = 0; i < 7; i++)
    {
        printf("\n null value of %d = %d",(i+1), num[i]);
    }
    getch();
    return 0;
}

