#include<stdio.h>
#include<conio.h>
int main()
{
    int Smoll_cnt = 0, i=0;
    char cSrc[20]={'\0'};

    printf("\nEnter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
       if(cSrc[i] >= 'a' && cSrc[i] <='z')
       {
        Smoll_cnt++;
       }
    i++;
    }
    printf("\n Count Of Capital Letters In Given string is =%d.",Smoll_cnt);


    getch();
    return 0;
}
