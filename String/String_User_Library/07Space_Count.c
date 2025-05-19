#include<stdio.h>
#include<conio.h>
int main()
{
    int Space_Cnt = 0, i=0;
    char cSrc[20]={'\0'};

    printf("\nEnter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
       if(cSrc[i] == ' ')
       {
        Space_Cnt++;
       }
    i++;
    }
    printf("\nGiven string Space Cnt is =%d.",Space_Cnt);


    getch();
    return 0;
}
