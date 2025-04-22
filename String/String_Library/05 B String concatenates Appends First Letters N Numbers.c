#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str1[100] = {};
    char str2[50] = {};
    int n = 0;

    puts("\n Enter First String :");
    gets(str1);

    puts("\n Enter Second String To Partially Append :");
    gets(str2);

    printf("\n How Many Characters You Want To Append From Second String? : ");
    scanf("%d", &n);

    printf("\n Before Concat => str1 = %s, str2 = %s", str1, str2);

    strncat(str1, " ", 1);
    strncat(str1, str2, n);

    printf("\n After Concat  => str1 = %s", str1);

    getch();
    return 0;
}

