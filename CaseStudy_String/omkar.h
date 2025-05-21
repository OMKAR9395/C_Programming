
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int strlenP(char[]);
void struprP(char[]);
void strlwrP(char*);
int SpaceCountP(char*);
int SpaceTabCountP(char*);
int CapCountP(char*);
int SmallCountP(char*);
int DigitCountP(char*);
void VowelConsonantCountP(char*,int*, int*, int*);

int strcpyP(char*, char*);
int strncpyP(char*, char*, int);

int strlenP(char cArr[])
{
        int Cnt = 0;


        while(cArr[Cnt] != '\0')
        {
             Cnt++;
        }

        return Cnt;
}

void struprP(char cArr[])
{
        int i = 0;

        while(cArr[i] != '\0')
        {
            if(cArr[i] >= 'a' && cArr[i] <= 'z')
            {
                cArr[i] = cArr[i] - 32;
            }
            i++;
        }

        return;
}

void strlwrP(char* cArr)
{
        int i = 0;

        while(cArr[i] != '\0')
        {
            if(cArr[i] >= 'A' && cArr[i] <= 'Z')
            {
                cArr[i] = cArr[i] + 32;
            }
            i++;
        }

        return;
}

int SpaceCountP(char* Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] == ' ')
            {
                Cnt++;
            }
            i++;
        }

        return Cnt;
}

int SpaceTabCountP(char* Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] == ' ' || Src[i] == '\t')
            {
                Cnt++;
            }
            i++;
        }

        return Cnt;
}

int CapCountP(char* Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] >= 65 && Src[i] <= 90)
            {
                Cnt++;
            }
            i++;
        }

        return Cnt;
}

int SmallCountP(char* Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] >= 97 && Src[i] <= 122)
            {
                Cnt++;
            }
            i++;
        }

        return Cnt;
}

int DigitCountP(char* Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] >= 48 && Src[i] <= 57)
            {
                Cnt++;
            }
            i++;
        }

        return Cnt;
}

void VowelConsonantCountP(char* Src, int* V, int* C, int* O)
{
        int i = 0;

        while(Src[i] != '\0')
        {
            if( Src[i] == 'a' || Src[i] == 'e' || Src[i] == 'i' || Src[i] == 'o' || Src[i] == 'u' || Src[i] == 'A' || Src[i] == 'E'|| Src[i] == 'I' || Src[i] == 'O' || Src[i] == 'U'  )
            {
                (*V)++;
            }
            else if( ( Src[i] >= 'A' && Src[i] <= 'Z' ) || ( Src[i] >= 'a' && Src[i] <= 'z' ) )
            {
                (*C)++;
            }
            else
            {
                (*O)++;
            }

            i++;
        }

        return;
}

int strcpyP(char* Dest, char* Src)
{
        int i = 0;

        while(Src[i] != '\0')
        {
            Dest[i] = Src[i];

            i++;
        }
        Dest[i] = '\0';

        return i;
}

int strncpyP(char* Dest, char* Src, int C)
{
        int i = 0;

        while(Src[i] != '\0' && C > 0 )
        {
            Dest[i] = Src[i];

            i++;
            C--;
        }
        Dest[i] = '\0';

        return i;
}

