#include<stdio.h>
#include<conio.h>

int VowelCount(char[]);

int main()
{
    char cSrc[20]="";
    int l_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    l_Cnt = VowelCount(cSrc);
    printf("\n Vowels Count Of Given String is :%d",l_Cnt);

    getch();
    return 0;;

}
int VowelCount(char Src[])
{
    int V_Cnt = 0, i=0;

    while(Src[i] != '\0')
    {
       if(Src[i] == 'a'|| Src[i] == 'e'|| Src[i] == 'i'|| Src[i] == 'o'||Src[i] == 'u'||Src[i] == 'A'||Src[i] == 'E'||Src[i] == 'I'||Src[i] == 'O'||Src[i] == 'U')
        {
        V_Cnt++;
        }
    i++;
    }
    return V_Cnt;
}
