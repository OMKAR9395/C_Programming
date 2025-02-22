#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Prompt user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial iteratively
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Display the result
        printf("The factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}

