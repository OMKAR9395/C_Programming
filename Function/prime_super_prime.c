///Find Prime Number Or super Prime Or Not Prime.
#include<stdio.h>
#include<conio.h>
int Prime(int);
int D_Sum(int);
int main()
{
    int No=0 ,Res = 0,Ret = 0;
    printf("\n Enter Number : ");
    scanf("%d",&No);
    if(No<0)
   {
       printf("\n Invalid Input!!");
   }
   else if(No==0||No==1)
   {
       printf("\n Number is Neutral");
   }
   else
    {
        Res = Prime(No);
        Ret = D_Sum(No);
        if(Res == 1&& Ret==1)
        {
            printf("\n Given Number Is Super Prime");
        }
        else if(Res==1 && Ret==0)
        {
            printf("\n Given number is Prime But not Super prime");
        }
        else if (Res==0)
        {
            printf("\n Given number is not Prime");
        }
    }
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
           i=1;
       }
       else
       {
           i=0;
       }

   return i;
}
int D_Sum(int Num)
{
    int D_Sum = 0,i=0;
    while(Num > 0)
    {
        D_Sum += Num % 10;
        Num = Num / 10;
    }



       for(i=2;i<D_Sum;i++)
       {
           if(D_Sum % i ==0)

           {
               break;
           }
       }
       if(i==D_Sum)
       {
           i=1;
       }
       else
       {
           i=0;
       }
    return i;
}
