#include <stdio.h>

void printTable(int num);

int main() {
    int num1 = 17;
    int num2 = 23;

    printf("Multiplication Table for %d\n", num1);
    printTable(num1);

    printf("\nMultiplication Table for %d\n", num2);
    printTable(num2);

    return 0;
}

void printTable(int num) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
