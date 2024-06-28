#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getch();
    printf("\nYou entered: ");
    putch(ch);
    printf("\n");
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase letter.\n", ch);
    } else {
        printf("The character '%c' is neither an uppercase nor a lowercase letter.\n", ch);
    }
    getch();
    return 0;
}

