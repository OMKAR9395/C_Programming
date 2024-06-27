#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,Spt=0,Ept=0;
    printf("\n\n === Enter Values To Get Table ======\n\n");
    printf("\n Enter Start Point : ");
    scanf("%d",&Spt);
    printf("\n Enter End Point : ");
    scanf("%d",&Ept);
    printf("\n======== %d & %d Tables Are Given Below ====\n",Spt,Ept);
    if(Spt<Ept)
    {
        for(R=1;R<=10;R++)
    {
        for(C=Spt;C<=Ept;C++)
        {
            printf("%2d x %2d = %3d ",C,R,R*C);
        }
        printf("\n");

    }
    }
    else
    {
        for(R=1;R<=10;R++)
    {
        for(C=Spt;C>=Ept;C--)
        {
            printf("%2d x %2d = %3d ",C,R,R*C);
        }
        printf("\n");

    }
    }
    printf("\n\n==========Thanks!!=============");
    getch();
    return 0;
}
