#include<stdio.h>
#include<conio.h>
int main()
{
    int C=0,R=0,N=0;

    printf("\n Enter Row & Column Size : ");
    scanf("%d",&N);
    for(R=1;R<=N;R++)
    {
        for(C=1;C<=N;C++)
        {
            if(C<=R)
            {
               if(C==1)
               {
                   printf(" 2");
               }
               else if(C==2)
               {
                   printf(" 4");
               }
               else if(C==3)
               {
                   printf(" 8");
               }
               else if(C==4)
               {
                   printf(" 10");
               }
               else if(C==5)
               {
                   printf(" 12");
               }

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
