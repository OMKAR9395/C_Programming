#include<stdio.h>
#include<conio.h>

int LowerCase (char[]);

int main()
{
    char cSrc[20]="";

    printf("\n Enter A String :");
    gets(cSrc);

    LowerCase(cSrc);
    printf("\n After Converting String To LowerCase is :%s",cSrc);

    getch();
    return 0;
}
int LowerCase( char Src[])
{
 int i =0;

 while(Src[i]!='\0')
 {
     if(Src[i]>='A' && Src[i]<='Z')
     {
         Src[i] = Src[i]+32;
     }
     i++;
 }
 return i;
}
