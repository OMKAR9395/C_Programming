#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char FirstString[50] = {};
    char SecondString[50] = {};
    int ComparisonResult = 0;

    puts("\n Enter First String :");
    gets(FirstString);

    puts("\n Enter Second String :");
    gets(SecondString);

    ComparisonResult = strcmp(FirstString, SecondString);

    printf("\n Comparing %s and %s\n", FirstString, SecondString);

    if (ComparisonResult == 0)
    {
    printf("Both strings are equal.");
    }
    else if (ComparisonResult > 0)
    {
    printf("%s is greater than %s", FirstString, SecondString);
    }
    else
    {
    printf("%s is less than %s", FirstString, SecondString);
    }

    getch();
    return 0;
}
