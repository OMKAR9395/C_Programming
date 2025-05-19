#include <stdio.h>
#include <conio.h>

void printASCIITable()
{
    for(int i = 0; i <= 127; i++)
    {
        printf("\n ASCII value of %d = %c", i, i);
    }
}

int main()
{
    printASCIITable();

    getch();
    return 0;
}
