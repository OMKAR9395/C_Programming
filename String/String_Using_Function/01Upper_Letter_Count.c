#include<stdio.h>
#include<conio.h>

int CapCount(char[]);

int main()
{
    char cSrc[20]="";
    int l_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    l_Cnt = CapCount(cSrc);
    printf("\n Capital letter Count Of Given String is :%d",l_Cnt);

    getch();
    return 0;;

}
int CapCount(char Src[])
{
    int len =0, i =0;

    while(Src[i] != '\0')
    {
        if(Src[i]>= 65 && Src[i]<=90)
        {
            len++;
        }
        i++;
    }
    return len;
}
