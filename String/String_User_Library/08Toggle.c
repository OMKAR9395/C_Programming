#include<stdio.h>
#include<conio.h>

int main()
{

    int  i = 0,
    char cSrc [20] = "";

    printf("\n Enter String :");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i]>='A'&& cSrc[i]<='Z')
        {
            cSrc[i] = cSrc[i]+32;
        }
        else if(cSrc[i]>='a'&&cSrc[i]<='z')
        {
            cSrc[i] = cSrc[i]-32;
        }
        i++;
    }
    getch();
    return 0;
}
