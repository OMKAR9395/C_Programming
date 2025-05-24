#include <stdio.h>
#include <conio.h>
void Reverse_First_Word(char *);

int main()
{
    char Str[100] = {'\0'};

    printf("\n Enter A String To Reverse Its First Word: ");
    gets(Str);

    Reverse_First_Word(Str);

    printf("\n String After Reversing First Word: %s", Str);

    getch();
    return 0;
}

void Reverse_First_Word(char *Src)
{
    int i = 0, J = 0;
    char temp;
    while (Src[i] == ' ' || Src[i] == '\t')
    {
        i++;
    }
    J = i;
    while (Src[i] != ' ' && Src[i] != '\t' && Src[i] != '\0')
    {
        i++;
    }
    i--;
    while (J < i)
    {
        temp = Src[J];
        Src[J] = Src[i];
        Src[i] = temp;

        J++;
        i--;
    }
}
