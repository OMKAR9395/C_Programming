#include<stdio.h>
#include<conio.h>

int SmallCount(char[]);

int main()
{
    char cSrc[20]="";
    int l_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    l_Cnt = SmollCount(cSrc);
    printf("\n Small letter Count Of Given String is :%d",l_Cnt);

    getch();
    return 0;;

}
int SmollCount(char Src[])
{
    int len =0, i =0;

    while(Src[i] != '\0')
    {
        if(Src[i]>= 96 && Src[i]<=122)
        {
            len++;
        }
        i++;
    }
    return len;
}
