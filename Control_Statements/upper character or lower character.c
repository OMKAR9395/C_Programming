#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n enter a character: ");
    scanf("%c",&ch);
    if (ch>='A' && ch<= 'Z')
    {
        printf("\n The character '%c' is an upper case letter",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n The character '%c' is an lower case letter",ch);
    }
    else
    {
        printf("\n The character '%c' is not upper case or lower case letter",ch);
    }
    getch();
    return 0;
}
