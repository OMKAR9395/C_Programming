#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char source[50] = {};
    char destination[50] = "omkartyuijdjksckjsn";

    puts("\n Enter A String To Copy First 5 Characters From It:");
    gets(source);

    printf("\n Before Copy => Source = %s, Destination = %s", source, destination);

    strncpy(destination, source, 5);
    destination[5] = '\0';

    printf("\n After Copy  => Source = %s, Destination = %s", source, destination);

    getch();
    return 0;
}
