#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("%c is a digit.\n", ch);
            break;
        default:
            if ((ch >= 'b' && ch <= 'z') || (ch >= 'B' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is a special character.\n", ch);
            }
    }

    return 0;
}
