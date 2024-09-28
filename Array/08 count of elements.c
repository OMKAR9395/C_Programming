#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Cnt=0;
    for(i=0;i<Size;i++)
    {
        printf("\n Enter Value of Element %d = ", i + 1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n Enter a key to execute program: ");
   getch();
    for(i=0;i<Size;i++)
    {
        printf("\n Value of Element %d = %d",i+1,Num[i]);
        Cnt++;
     }
    printf("\n\n %d Elements in that program",Cnt);
    getch();
    return 0;
}

