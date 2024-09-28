#include<stdio.h>
#include<conio.h>
int main()
{
    int C=0,R=0,N=0,ch=1;

    printf("\n Enter Row & Column Size : ");
    scanf("%d",&N);
    for(R=1;R<=N;R++)
    {
        for(C=1;C<=N;C++)
        {
            if(R>=C)
            {
                printf(" %d",ch);
                ch++;
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
