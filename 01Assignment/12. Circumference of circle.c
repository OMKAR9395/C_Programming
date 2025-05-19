#include <stdio.h>
#include <conio.h>

float calculateCircumference(float radius)
{
    return 2 * 3.14 * radius;
}

void displayCircumference()
{
    float radius, circum;

    printf("\n Enter Radius: ");
    scanf("%f", &radius);

    circum = calculateCircumference(radius);

    printf("\n Circumference = %.2f", circum);
}

int main()
{
    displayCircumference();

    getch();
    return 0;
}
