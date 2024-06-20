#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0, bill_count=0;
    float bill_amt=0;
    double bill_sum=0;
    for (i=1; ;i++)
    {
        printf("\n enter bill number %d= ",i);
        scanf("%f",&bill_amt);
        if (bill_amt<=0)
        {
            break;
        }
        bill_sum = bill_sum + bill_amt;
    }
    printf("\n addition of given bills= %lf",bill_sum);
    getch();
    return 0;
}
