#include <stdio.h>
#include <conio.h>

float calculateCircleArea(float radius)
{
    return 3.14 * radius * radius;
}

void displayCircleArea()
{
    float radius, area;

    printf("\n Enter Radius: ");
    scanf("%f", &radius);

    area = calculateCircleArea(radius);

    printf("\n Area = %.6f", area);
}

int main()
{
    displayCircleArea();

    getch();
    return 0;
}
