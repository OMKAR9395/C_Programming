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

    for(Row =1,ch = 'A';Row<=N;Row++,ch++)
    {
        
        for(Col=1;Col<=N;Col++)
        {
            if(Row + Col<=N+1)
            {
                printf(" %c",ch);
               
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