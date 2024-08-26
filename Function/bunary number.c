#include<stdio.h>
#include<conio.h>
void Binary(int);
int main()
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d",&n);

    printf("Binary representation: ");
    Binary(n);

    return 0;
}
void Binary(int n)
{
    int BiNum[32]={};

    int i = 0;
    while (n > 0)
    {

        BiNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", BiNum[i]);
    }

    getch();
}

