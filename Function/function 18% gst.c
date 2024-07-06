#include<stdio.h>
#include<conio.h>
void calculatePrice(float value);
int main()
{
    float value=0;
    printf("\n Enter Value To Find Its Gst plus Value : ");
    scanf("%f",&value);
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value)
{
    value = value + (0.18*value);
    printf("\n Final Price with gst  : %f",value);
}
