#include <stdio.h>
#include <conio.h>

int getASCII(char ch)
{
    return (int)ch;
}

int main()
{
    char ch;

    printf("\n Enter a character: ");
    scanf(" %c", &ch);

    printf("\n The ASCII value of '%c' is: %d", ch, getASCII(ch));

    getch();
    return 0;
}
