#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct Product
{
    int Pid;
    char PName[10];
    float PPPrice;
    float PSPrice;

};
int main()
{
    struct Product Pobj;
    Pobj.Pid;
    Pobj.PName;
    Pobj.PPPrice;
    Pobj.PSPrice;
    printf("\n\n Garbage Values athese are\n");
    printf("\n Product id is = %d",Pobj.Pid);
    printf("\n Product Name is = %s",Pobj.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj.PSPrice);
    getch();
    printf("\n Enter All Values to Product\n");

    printf("\n Enter Product Id :");
    scanf("%d",&Pobj.Pid);
    fflush(stdin);
    printf("\n Enter Product Name : ");
    scanf("%s",&Pobj.PName);
    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj.PPPrice);
    printf("\n Enter Product Selling Price : ");
    scanf("%f",&Pobj.PSPrice);
    getch();
    system("cls");
    printf("\n Tou Entered Product Details Are\n");

    printf("\n Product id is = %d",Pobj.Pid);
    printf("\n Product Name is = %s",Pobj.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj.PSPrice);
    getch();

    return 0;
}

