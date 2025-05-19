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
        if(cSrc[i]>='A' && cSrc[i]<='Z')
        {
            cSrc[i] = cSrc[i]+32;
        }
        i++;
    }
    printf("\n Given String After lower case = %s.",cSrc);

    getch();
    return 0;

}
