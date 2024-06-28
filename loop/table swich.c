#include <stdio.h>

int main() {
    int number, choice;

    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &number);

    printf("Enter the range for the multiplication table (up to which number you want to multiply): ");
    scanf("%d", &choice);

    printf("Multiplication Table for %d:\n", number);

    switch (choice) {
        case 1:
            printf("%d x %d = %d\n", number, 1, number * 1);
            break;
        case 2:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            break;
        case 3:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            break;
        case 4:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            break;
        case 5:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            break;
        case 6:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            printf("%d x %d = %d\n", number, 6, number * 6);
            break;
        case 7:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            printf("%d x %d = %d\n", number, 6, number * 6);
            printf("%d x %d = %d\n", number, 7, number * 7);
            break;
        case 8:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            printf("%d x %d = %d\n", number, 6, number * 6);
            printf("%d x %d = %d\n", number, 7, number * 7);
            printf("%d x %d = %d\n", number, 8, number * 8);
            break;
        case 9:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            printf("%d x %d = %d\n", number, 6, number * 6);
            printf("%d x %d = %d\n", number, 7, number * 7);
            printf("%d x %d = %d\n", number, 8, number * 8);
            printf("%d x %d = %d\n", number, 9, number * 9);
            break;
        case 10:
            printf("%d x %d = %d\n", number, 1, number * 1);
            printf("%d x %d = %d\n", number, 2, number * 2);
            printf("%d x %d = %d\n", number, 3, number * 3);
            printf("%d x %d = %d\n", number, 4, number * 4);
            printf("%d x %d = %d\n", number, 5, number * 5);
            printf("%d x %d = %d\n", number, 6, number * 6);
            printf("%d x %d = %d\n", number, 7, number * 7);
            printf("%d x %d = %d\n", number, 8, number * 8);
            printf("%d x %d = %d\n", number, 9, number * 9);
            printf("%d x %d = %d\n", number, 10, number * 10);
            break;
        default:
            printf("Error: Invalid range.\n");
    }
    getch();
    return 0;
}
