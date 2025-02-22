#include<stdio.h>
#include<conio.h>
int main()
{
    int num=24, i=0;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    for(i = 1; i <= 10; i++) 
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    getch();
    return 0;
}
