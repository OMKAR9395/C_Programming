#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char Source[50] = {};
    char Destination[50] = "Harry Potter";
    int n = 0;

    puts("\n Enter A String To Copy Part Of It :");
    gets(Source);

    printf("\n Enter How Many Characters You Want To Copy : ");
    scanf("%d", &n);

    printf("\n Before Copy => Source = %s, Destination = %s", Source, Destination);

    strncpy(Destination, Source, n);
    Destination[n] = '\0';

    printf("\n After Copy  => Source = %s, Destination = %s", Source, Destination);

    getch();
    return 0;
}
