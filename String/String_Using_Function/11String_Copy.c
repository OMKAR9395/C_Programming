#include<stdio.h>
#include<conio.h>

void StringNCpy(char[],char[],int);

int main()
{
    char cSrc[20] = "",cDest[20] = "";


    printf("\n Enter a String :");
    gets(cSrc);

    StringNCpy(cDest,cSrc,7);

    printf("\n Entered String : %s",cSrc);
    printf("\n Copy String : %s",cDest);

    getch();
    return 0;
}

void StringNCpy(char Dest[],char Src[],int C)
{
    int i = 0;

    while(Src[i] != '\0' && i < C)
    {
      Dest[i] = Src[i];
      i++;
    }
    Dest[i] = '\0';

    return i;

}
