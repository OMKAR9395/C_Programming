#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char str1[100] = {};
    char str2[50] = {};

    puts("\n Enter First String :");
    gets(str1);

    puts("\n Enter Second String To Append :");
    gets(str2);

    printf("\n Before strncat => str1 = %s, str2 = %s", str1, str2);

    strcat(str1, " ");
    strncat(str1, str2, 4);

    printf("\n After strncat  => str1 = %s", str1);

    getch();
    return 0;
}

