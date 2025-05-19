#include<stdio.h>
#include<conio.h>

int SpaceCount(char[]);

int main()
{
    char cSrc[20]="";
    int l_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    l_Cnt = SpaceCount(cSrc);
    printf("\n Space Count Of Given String is :%d",l_Cnt);

    getch();
    return 0;;

}
int SpaceCount(char Src[])
{
    int S_Cnt = 0, i=0;

    while(Src[i] != '\0')
    {
      if(Src[i]==' ')
      {
          S_Cnt++;
      }
      i++;
    }
    return S_Cnt;
}
