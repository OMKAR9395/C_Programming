#include<stdio.h>
#include<conio.h>

int UpperCase (char[]);

int main()
{
    char cSrc[20]="";

    printf("\n Enter A String :");
    gets(cSrc);

    UpperCase(cSrc);
    printf("\n After Converting String To UpperCase is :%s",cSrc);

    getch();
    return 0;
}
int UpperCase( char Src[])
{
 int i =0;

 while(Src[i]!='\0')
 {
     if(Src[i]>='a' && Src[i]<='z')
     {
         Src[i] = Src[i]-32;
     }
     i++;
 }
 return i;
}
