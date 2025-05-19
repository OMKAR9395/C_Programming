#include<stdio.h>
#include<conio.h>
int main()
{
        int i=0, j=0;
        char cSrc[20]={'\0'};

        printf("\nEnter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            i++;
        }
        i--;

        while(i >= j)
        {
                if(cSrc[i] != cSrc[j])
                {
                        break;
                }
                i--;
                j++;
        }

        if(i<j)
        {
            printf("\nGiven string is palindrome.");
        }
        else
        {
            printf("\nGiven string is not palindrome.");
        }

        getch();
        return 0;
}
