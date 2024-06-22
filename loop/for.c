#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("The sum of even numbers from 1 to 100 is %d\n", sum);
    return 0;
}
