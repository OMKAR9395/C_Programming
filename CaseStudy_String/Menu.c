#include "omkar.h"

int main()
{
    char str[100], dest[100];
    int choice, len, count, vowels, consonants, others;

    printf("Enter a string: ");
    gets(str);

    do
    {

        system("cls");
        printf("\n\n==========================*****==========================\n\n");
        printf("\n\n--- String Function Menu ---\n");
        printf("1. String Length\n");
        printf("2. Convert to Uppercase\n");
        printf("3. Convert to Lowercase\n");
        printf("4. Count Spaces\n");
        printf("5. Count Spaces and Tabs\n");
        printf("6. Count Capital Letters\n");
        printf("7. Count Small Letters\n");
        printf("8. Count Digits\n");
        printf("9. Count Vowels, Consonants, Others\n");
        printf("10. Copy String (strcpyF)\n");
        printf("11. Copy N Characters (strncpyF)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        system("cls"); // Clear before showing output of selected operation

        switch (choice)
        {
            case 1:
                len = strlenP(str);
                printf("Length: %d\n", len);
                break;
            case 2:
                struprP(str);
                printf("Uppercase: %s\n", str);
                break;
            case 3:
                strlwrP(str);
                printf("Lowercase: %s\n", str);
                break;
            case 4:
                count = SpaceCountP(str);
                printf("Space Count: %d\n", count);
                break;
            case 5:
                count = SpaceTabCountP(str);
                printf("Space and Tab Count: %d\n", count);
                break;
            case 6:
                count = CapCountP(str);
                printf("Capital Letter Count: %d\n", count);
                break;
            case 7:
                count = SmallCountP(str);
                printf("Small Letter Count: %d\n", count);
                break;
            case 8:
                count = DigitCountP(str);
                printf("Digit Count: %d\n", count);
                break;
            case 9:
                vowels = consonants = others = 0;
                VowelConsonantCountP(str, &vowels, &consonants, &others);
                printf("Vowels: %d, Consonants: %d, Others: %d\n", vowels, consonants, others);
                break;
            case 10:
                strcpyP(dest, str);
                printf("Copied String: %s\n", dest);
                break;
            case 11:
                printf("Enter number of characters to copy: ");
                int n;
                scanf("%d", &n);
                getchar();
                strncpyP(dest, str, n);
                printf("Copied (first %d chars): %s\n", n, dest);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

        if (choice != 0)
        {
            printf("\nPress Enter to continue...");
            getchar();
        }

    }
    while (choice != 0);

    return 0;
}
