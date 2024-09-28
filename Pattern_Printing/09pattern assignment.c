#include<stdio.h>
#include<conio.h>
int main()
{
    int C=0,R=0,N=0,No1=0,No2=0,No3=1;

    printf("\n Enter Row & Column Size : ");
    scanf("%d",&N);
    for(R=1;R<=N;R++)
    {
        for(C=1;C<=N;C++)
        {
            if(R>=C)
            {
                printf(" %d",No1);
                No1=No2+No3;
                No3=No2;
                No2=No1;
            }
            else
            {
                printf(" ");

            }

        }
        printf("\n");
    }
    printf("\n Thanks!!");
    getch();
    return 0;
}
