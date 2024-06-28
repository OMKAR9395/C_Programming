#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'A'...'Z':
        printf("\n The character '%c' is an upper case letter",ch);
        break;
    case 'a'...'z':
        printf("\n The character '%c' is an lower case letter",ch);
        break;
    default:
        printf("\n The character '%c' is not uppercase and lower case",ch);
        break;
    }
    getch();
    return 0;
}
