#include <stdio.h>
#include <conio.h>

int main()
 {
    char ch;

    printf("Enter characters (Press Enter to stop):\n");

    while (1)
        {
        ch = getch();
        if (ch == '\r')
        {
            break;
        }
        putch(ch);
        }

    printf("\nYou have finished entering characters.\n");
    getch();
    return 0;
}

