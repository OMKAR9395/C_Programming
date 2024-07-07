#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Cnt=0,Element=0;
    for(i=0;i<Size;i++)
    {
        printf("\n Enter Value of Element %d = ", i + 1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n Enter a number to find how many times executed: ");
    scanf("%d",&Element);
    for(i=0;i<Size;i++)
    {
        printf("\n Value of Element %d = %d",i+1,Num[i]);
        if(Num[i]==Element)
        {
            Cnt++;
        }
    }
    printf("\n\n %d in that program %d times",Element,Cnt);
    getch();
    return 0;
}

