#include<stdio.h>
#include<conio.h>
int main()
{
    char spt='\0', ept='\0';
    up:
    printf("\n enter a start point: ");
    scanf("%c",&spt);
    printf("\n  enter a end point: ");
    scanf( " %c",&ept);
    if (spt>ept)
    {
        printf("\n invalid");
     goto up;
    }
    while (spt<=ept)
        {
            printf("\t%c",spt);
            spt++;
        }
    printf("\n thanks!!");
    getch();
    return 0;
}
