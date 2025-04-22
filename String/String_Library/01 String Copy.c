#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char source[50] = {};
    char destination[50] = {};

    puts("\n Enter A String To Copy That String :");

    gets(source);

    printf("\n String Before Copy Source = %s And Destination = %s",source,destination);

    strcpy(destination, source);

    printf("\n String After Copy Source = %s And Destination = %s",source,destination);


    getch();
    return 0;
}

