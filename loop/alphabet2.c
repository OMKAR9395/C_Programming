#include <stdio.h>
#include <conio.h>
int main()
{
    char spt='\0',ept='\0';
    printf("\n Enter a Start Point= ");
    scanf("%c",&spt);
    fflush(stdin);
    printf("\n Enter a End Point: ");
    scanf("%c",&ept);
    while (spt<=ept)
    {
        printf("\n %c",spt);
        spt++;
    }
    printf("\n Thanks!!");
    getch();
    return 0;
}

