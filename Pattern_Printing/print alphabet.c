#include <stdio.h>
#include <conio.h>
int main()
{
    char spt='\0',ept='\0';
    printf("\n enter a start point= ");
    scanf("%c",&spt);
    printf("\n enter a end point: ");
    scanf(" %c",&ept);
    while (spt<=ept)
    {
        printf("\n %c",spt);
        spt++;
    }
    printf("\n thanks!!");
    getch();
    return 0;
}
