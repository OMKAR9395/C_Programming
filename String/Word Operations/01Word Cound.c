#include<stdio.h>
#include<conio.h>

int Word_Count(char* );
int main()
{
    char Str[40] = {'\0'};
    int Wcnt = 0;

    printf("\n Enter A String To Find It's Word Count : ");
    gets(Str);

    Wcnt = Word_Count(Str);

    printf("\n Given String of Word Count is %d .",Wcnt);
    getch();

    return 0;
}

int Word_Count(char* Src)
{
    int i  = 0, Cnt = 0;

    while(Src[i] != '\0')
    {
        while(Src[i] == ' ' || Src[i] == '\t' || Src[i] == '.' || Src[i] == ',')
        {
            i++;
        }
        if(Src[i] != '\0')
        {
            Cnt++;
        }
        while(Src[i] != '\0' && Src[i] != ' ' && Src[i] != '\t' && Src[i] != '.' && Src[i] != ',')
        {
            i++;
        }
    }
    return Cnt;
}
