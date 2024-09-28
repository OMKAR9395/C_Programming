#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define Num_Pro 5
struct Product
{
    int Pid;
    char PName[10];
    float PPPrice;
    float PSPrice;

};
int main()
{
    struct Product Pobj[Num_Pro]={};
    int i=0;
    for(i=0;i<Num_Pro;i++)
    {
    printf("\n Enter Product Details Number :%d\n",i+1);
    printf("\n Enter Product Id :");
    scanf("%d",&Pobj[i].Pid);
    fflush(stdin);
    printf("\n Enter Product Name : ");
    gets(Pobj[i].PName);        ///scanf("%s",&Pobj.PName);
    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj[i].PPPrice);
    printf("\n Enter Product Selling Price : ");
    scanf("%f",&Pobj[i].PSPrice);
    printf("\n");
    }
    for(i=0;i<Num_Pro;i++)
    {
    printf("\n\n Product number %d details are",i+1);
    printf("\n Product id is = %d",Pobj[i].Pid);
    printf("\n Product Name is = %s",Pobj[i].PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj[i].PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj[i].PSPrice);
    }
    getch();
    return 0;
}

