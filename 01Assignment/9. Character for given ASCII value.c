#include <stdio.h>
#include <conio.h>

char getCharacter(int ascii)
{
    return (char)ascii;
}

void displayCharacterFromASCII()
{
    int value;
    char ch;

    printf("\n Enter ASCII Value: ");
    scanf("%d", &value);

    ch = getCharacter(value);

    printf("\n The character for ASCII value %d is: '%c'", value, ch);
}

int main()
{
    displayCharacterFromASCII();

    getch();
    return 0;
}
