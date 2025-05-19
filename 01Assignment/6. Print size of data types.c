#include <stdio.h>
#include <conio.h>

void printSizes()
{
    printf("\n Size of char    : %d byte", sizeof(char));
    printf("\n Size of int     : %d bytes", sizeof(int));
    printf("\n Size of float   : %d bytes", sizeof(float));
    printf("\n Size of double  : %d bytes", sizeof(double));
}

int main()
{
    printSizes();

    getch();
    return 0;
}
