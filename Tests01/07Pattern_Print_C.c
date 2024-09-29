//////////////////////
//                  //
//  Pattern Print   //
//                  //
//////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int Row =0,Col=0,N=5;
    char ch='\0';

    printf("\n\n=====================Pattern Printing==================\n\n");

    for(Row =1;Row<=N;Row++)
    {
        ch = 'A';   
        for(Col=1;Col<=N;Col++)
        {
            if(Row==1 || Row==N || Col==1 ||Col==N)
            {
                printf(" %c",ch);
               
            }
            else
            {
                printf("  ");
            }
          ch++;
        }
        printf("\n");
    }

    getch();
    return 0;
}