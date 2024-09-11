#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    arr = (int*)malloc(n * sizeof(int));

    // Check if the memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using malloc.\n");

        // Get elements of the array
        for (i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        // Print the elements of the array 
        printf("The elements of the array are: ");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }

        // Free the allocated memory
        free(arr);
        printf("\nMemory successfully freed.\n");
    }

    return 0;
}
