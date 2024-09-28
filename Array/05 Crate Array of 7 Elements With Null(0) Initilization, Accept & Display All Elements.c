#include <stdio.h>
#include<conio.h>
int main()
{
    int arr[7] = {0},i=0;
    printf("\n Enter 7 Numbers");
    for (i = 0; i < 7; i++)
{
        printf("\n Enter number %d: ", i + 1);
        scanf("%d",&arr[i]);
}
    printf("\n The numbers of the array are:");
    for (i = 0; i < 7; i++)
    {
        printf("\n Numberof %d is = %d",i+1,arr[i]);
    }
    getch();
    return 0;
}

