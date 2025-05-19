#include<stdio.h>
#include<conio.h>
int main()
{
    int Capital_cnt = 0, i=0;
    char cSrc[20]={'\0'};

    printf("\nEnter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
       if(cSrc[i] >= 'A' && cSrc[i] <='Z')
       {
        Capital_cnt++;
       }
    i++;
    }
    printf("\n Count Of Capital Letters In Given string is =%d.",Capital_cnt);


    getch();
    return 0;
}
