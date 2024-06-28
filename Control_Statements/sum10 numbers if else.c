#include <stdio.h>
#include <conio.h>
int main()
{
    int sum=0,number,i=1s;
    printf("\n enter 10 different numbers: ");
    while(i<=10)
    {
        printf("enter a number %d: ",i);
        scanf("%d",&number);
        if(i==1)
        {
            sum+=number;
        }else if(i==2)
        {
            sum+=number;
        }else if(i==3)
        {
            sum+=number;
        }else if(i==4)
        {
            sum+=number;
        }else if(i==5)
        {
            sum+=number;
        }else if(i==6)
        {
            sum+=number;
        }else if(i==7)
        {
            sum+=number;
        }else if(i==8)
        {
            sum+=number;
        }else if(i==9)
        {
            sum+=number;
        }else if(i==10)
        {
            sum+=number;
        }else
        {
            printf("\n invalid");
        }
        i++;
    }
    printf("\n the sum of the 10 number is %d",sum);
    getch();
    return 0;
}
