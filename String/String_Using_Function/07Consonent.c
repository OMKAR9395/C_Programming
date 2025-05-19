#include<stdio.h>
#include<conio.h>

int VowelConsonant_Count (char*,int*,int*,int*);

int main()
{
    int cnt = 0, v_cnt =0,c_cnt =0,o_cnt =0;
    char cSrc[20]="";

    printf("\n Enter A String :");
    gets(cSrc);

    cnt = VowelConsonant_Count(cSrc,&v_cnt,&c_cnt,&o_cnt);

    printf("\n String Count Of Given String Is :%d",cnt);
    printf("\n Vowel Count Of Given String Is :%d",v_cnt);
    printf("\n Consonant Count Of Given String Is :%d",c_cnt);
    printf("\n Other Count Of Given String Is :%d",o_cnt);

    getch();
    return 0;
}
int VowelConsonant_Count(char* Src,int* v,int* c,int* o)
{
    int i=0;

    while(Src[i]!='\0')
    {
        if(Src[i]=='A' || Src[i]=='E' || Src[i]=='I' || Src[i]=='O' || Src[i]=='U' || Src[i]=='a' || Src[i]=='e' || Src[i]=='i' || Src[i]=='o' || Src[i]=='u')
        {
           (*v)++;
        }
        else if((Src[i]>=65 && Src[i]<=90) || (Src[i]>=97 && Src[i]<=122))
        {
            (*c)++;
        }
        else
        {
            (*o)++;
        }
        i++;
    }
    return i;
}
