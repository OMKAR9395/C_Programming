#include <stdio.h>
#include <conio.h>

float calculateRectangleArea(float width, float height)
{
    return width * height;
}

void displayRectangleArea()
{
    float w, h, area;

    printf("\n Enter Width: ");
    scanf("%f", &w);

    printf("\n Enter Height: ");
    scanf("%f", &h);

    area = calculateRectangleArea(w, h);

    printf("\n Area: %.2f", area);
}

int main()
{
    displayRectangleArea();

    getch();
    return 0;
}

