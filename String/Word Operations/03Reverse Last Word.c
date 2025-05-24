#include <stdio.h>
#include <conio.h>

void Reverse_Last_Word(char *);

int main()
{
    char Str[100] = {'\0'};

    printf("\n Enter A String To Reverse Its Last Word: ");
    gets(Str);

    Reverse_Last_Word(Str);

    printf("\n String After Reversing Last Word: %s", Str);

    getch();
    return 0;
}

void Reverse_Last_Word(char *Src)
{
    int len = 0, end, start;

    while (Src[len] != '\0')
    {
        len++;
    }

    end = len - 1;

    while (end >= 0 && (Src[end] == ' ' || Src[end] == '\t'))
    {
        end--;
    }
    start = end;
    while (start >= 0 && Src[start] != ' ' && Src[start] != '\t')
    {
        start--;
    }

    start++;
    while (start < end)
    {
        Src[start] = Src[start] + Src[end];
        Src[end]   = Src[start] - Src[end];
        Src[start] = Src[start] - Src[end];

        start++;
        end--;
    }
}

