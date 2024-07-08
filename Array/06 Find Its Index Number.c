#include<stdio.h>
#include<conio.h>
#define Size 10
int main()
{
    int i=0,Num[Size]={},Index=0;
    printf("\n ==========Enter Elements ============");
    for(i=0;i<Size;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Num[i]);
    }
    system("cls");
    printf("\n Enter One Element To Find Its Index : ");
    scanf("%d",&Index);
    for(i=0;i<Size;i++)
    {
       if(Index == Num[i])
       {
           break;
       }
    }

    printf("\n You Entered Number is %d And Its Index is %d",Index,i);
    getch();
    return 0;
}
