#include <stdio.h>
#include <conio.h>

void displayASCIIFormats(char ch)
{
    printf("\n Decimal     : %d", ch);
    printf("\n Octal       : %o", ch);
    printf("\n Hexadecimal : %X", ch);
}

int main()
{
    char ch;

    printf("\n Enter a character: ");
    scanf(" %c", &ch);

    displayASCIIFormats(ch);

    getch();
    return 0;
}
