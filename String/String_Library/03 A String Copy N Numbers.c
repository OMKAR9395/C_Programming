#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char source[50] = {};
    char destination[50] = {};
    int n = 0;

    puts("\n Enter A String To Copy Part Of It :");
    gets(source);

    printf("\n Enter How Many Characters You Want To Copy : ");
    scanf("%d", &n);

    printf("\n Before Copy => Source = %s, Destination = %s", source, destination);

    strncpy(destination, source, n);
    destination[n] = '\0';

    printf("\n After Copy  => Source = %s, Destination = %s", source, destination);

    getch();
    return 0;
}

