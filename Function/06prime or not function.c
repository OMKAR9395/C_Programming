///with using function
#include<stdio.h>
#include<conio.h>
void Prime(int);
int main()
{
    int Num = 0;
    printf("\n Enter Positive Integer Number : ");
    scanf("%d",&Num);
    Prime(Num);
    printf("\n Thanks");
    getch();
    return 0;
}
void Prime(int No)
{
   int i=0;
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
       for(i=2;i<No;i++)
       {
           if(No%i==0)

           {
               break;
           }
       }
       if(i==No)
       {
           printf("\n Given Number %d is Prime ",No);
       }
       else
       {
           printf("\n Given number %d is Not Prime",No);
       }
   }
   return;
}
