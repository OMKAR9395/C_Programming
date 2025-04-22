#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str[40] = {};
    int length = 0;

    puts("\n Enter A String To Calculate Its Length :");

    gets(str);

    printf("\n You Entered: %s", str);

    length = strlen(str);

    printf("\n Length of the String is: %d", length);

    getch();
    return 0;
}
