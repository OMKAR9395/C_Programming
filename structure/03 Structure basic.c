#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Product
{
    int Pid;
    char PName[10];
    float PPPrice;
    float PSPrice;

};
int main()
{
    struct Product Pobj1={},Pobj2={};
    printf("\n 1st Product Details are =>\n");

    printf("\n Product id is = %d",Pobj1.Pid);
    printf("\n Product Name is = %s",Pobj1.PName);
    printf("\n Product Purchase Price is = %f",Pobj1.PPPrice);
    printf("\n Product Sales Price is = %f",Pobj1.PSPrice);

    printf("\n 2nd Product Details are =>\n");

    printf("\n Product id is = %d",Pobj2.Pid);
    printf("\n Product Name is = %s",Pobj2.PName);
    printf("\n Product Purchase Price is = %f",Pobj2.PPPrice);
    printf("\n Product Sales Price is = %f",Pobj2.PSPrice);
    getch();
    return 0;
}
