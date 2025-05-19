#include<stdio.h>
#include<conio.h>

int main()
{
    int  i=0;
    char cSrc[20]={'\0'};

    printf("\nEnter a string : ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='a' && cSrc[i]<='z')
        {
            cSrc[i] = cSrc[i]-32;
        }
        i++;
    }
    printf("\n Given String After Capitalization = %s.",cSrc);

    getch();
    return 0;

}
