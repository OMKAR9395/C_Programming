#include<stdio.h>
#include<conio.h>

void Total(int,int,int,int*);

int main()
{
    int Phy=0,Chem=0,Math=0;
    int *Tot;

    printf("\n Enter Physics Marks :");
    scanf("%d",&Phy);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&Chem);

    printf("\n Enter Mathematics Marks :");
    scanf("%d",&Math);

    Total(Phy, Chem, Math, &Tot);
    
    printf("\n Total Marks %d.",Tot);
    
    return 0;
}
void Total(int P,int C,int M,int* T)
{
    *T = P + C + M;
}