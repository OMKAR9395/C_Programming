///using function print in main
#include<stdio.h>
#include<conio.h>
int Prime(int);
int main()
{
    int Num = 0,Ans=0;
    printf("\n Enter Positive Integer Number : ");
    scanf("%d",&Num);
     if(Num<0)
   {
       printf("\n Invalid Input!!");
   }
   else if(Num==0||Num==1)
   {
       printf("\n Number is Neutral");
   }
   else
    {
        Ans = Prime(Num);
        if (Ans == 1)
        {
           printf("\n Given number %d is Prime",Num);
        }
        else
        {
            printf("\n Given number %d is not Prime",Num);
        }
    }

    printf("\n Thanks");
    getch();
    return 0;
}
int Prime(int No)
{
   int i=0;

       for(i=2;i<No;i++)
       {
           if(No%i==0)

           {
               break;
           }
       }
       if(i==No)
       {
           return 1;
       }
       else
       {
          return 0;
       }
    return;
}
