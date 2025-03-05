#include<stdio.h>
#include<conio.h>

void Total(int,int,int,float*,float*);

int main()
{
    int Phy=0,Chem=0,Math=0;
    float Tot=0.0,Per=0.0;

    printf("\n Enter Physics Marks :");
    scanf("%d",&Phy);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&Chem);

    printf("\n Enter Mathematics Marks :");
    scanf("%d",&Math);

    Total(Phy,Chem,Math,&Tot,&Per);
    
    printf("\n Total Marks %0.0f.",Tot);
    printf("\n Percentage Of Total Marks Is : %0.2f",Per);
    
    return 0;
}
void Total(int P,int C,int M,float* T,float* Per)
{
    *T = P + C + M;
    *Per = *T/3;
}