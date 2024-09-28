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
    struct Product Pobj;
    Pobj.Pid;
    Pobj.PName;
    Pobj.PPPrice;
    Pobj.PSPrice;
    printf("\n Product id is = %d",Pobj.Pid);
    printf("\n Product Name is = %s",Pobj.PName);
    printf("\n Product Purchase Price is = %0.2f",Pobj.PPPrice);
    printf("\n Product Sales Price is = %0.2f",Pobj.PSPrice);
    getch();
    return 0;
}

