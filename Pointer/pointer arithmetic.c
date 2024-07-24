#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (i=0; i < 5; i++)
    {
        printf("Element %d: %d\n", i+1, *(ptr + i));
    }
    getch();
    return 0;
}

