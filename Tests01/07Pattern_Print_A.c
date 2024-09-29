//////////////////////////
//                      //
//  Pattern Printing .  //
//                      //
//////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int Row =0,Col=0,N=5,ch=2;

    printf("\n\n=====================Pattern Printing==================\n\n");

    for(Row =1;Row<=N;Row++)
    {
        for(Col=1;Col<=N;Col++)
        {
            if(Row>=Col)
            {
                printf(" %d",ch);
                ch = ch+2;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}