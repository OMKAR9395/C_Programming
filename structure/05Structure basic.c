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
    struct Product Pobj1={},Pobj2={},Pobj3={};

    printf("\n Enter All Values to Product 1\n");

    printf("\n Enter Product Id :");
    scanf("%d",&Pobj1.Pid);
    fflush(stdin);
    printf("\n Enter Product Name : ");
    gets(Pobj1.PName);        ///scanf("%s",&Pobj.PName);
    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj1.PPPrice);
    printf("\n Enter Product Selling Price : ");
    scanf("%f",&Pobj1.PSPrice);

    printf("\n Enter All Values to Product 2\n");

    printf("\n Enter Product Id :");
    scanf("%d",&Pobj2.Pid);
    fflush(stdin);
    printf("\n Enter Product Name : ");
    gets(Pobj2.PName);        ///scanf("%s",&Pobj.PName);
    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj2.PPPrice);
    printf("\n Enter Product Selling Price : ");
    scanf("%f",&Pobj2.PSPrice);

    printf("\n Enter All Values to Product 3\n");

    printf("\n Enter Product Id :");
    scanf("%d",&Pobj3.Pid);
    fflush(stdin);
    printf("\n Enter Product Name : ");
    gets(Pobj3.PName);        ///scanf("%s",&Pobj.PName);
    printf("\n Enter Product Purchase Price : ");
    scanf("%f",&Pobj3.PPPrice);
    printf("\n Enter Product Selling Price : ");
    scanf("%f",&Pobj3.PSPrice);
    getch();
    printf("\n enter any key...");
    system("cls");
    printf("\n Tou Entered Product Details Are\n");

    printf("\n Product id is = %d",Pobj1.Pid);
    printf("\n Product Name is = %s",Pobj1.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj1.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj1.PSPrice);
    printf("\n Product id is = %d",Pobj2.Pid);
    printf("\n Product Name is = %s",Pobj2.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj2.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj2.PSPrice);
    printf("\n Product id is = %d",Pobj3.Pid);
    printf("\n Product Name is = %s",Pobj3.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj3.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj3.PSPrice);
    getch();

    return 0;
}

