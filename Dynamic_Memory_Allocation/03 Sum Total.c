#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n=0, i=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    
        for (i = 0; i < n; i++)
        {
            printf("Enter element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("The elements of the array are: ");
        for (i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }

        
    

    return 0;
}
