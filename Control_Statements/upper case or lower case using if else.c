#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a character: ");
    scanf("%c",&ch);
    if ( ch >= 'A'&& ch <='Z')
    {
        printf("\n The character '%c' is an upper case",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n The character '%c' is an lower case",ch);
    }
    else
    {
        printf("\n The character '%c' is not upper or lower case",ch);
    }
    getch();
    return 0;
}
