#include <stdio.h>
#include <conio.h>
int main()
{
    int sum=0,number,i=1;
    printf("\n Enter 10 Different Numbers: ");
    while(i<=10)
    {
        printf("Enter a Number %d: ",i);
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
            printf("\n Invalid");
        }
        i++;
    }
    printf("\n The Sum of the 10 Number is %d",sum);
    getch();
    return 0;
}
