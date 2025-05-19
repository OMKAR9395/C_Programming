#include <stdio.h>
#include <conio.h>

float convertToCelsius(float f);

int main()
{
    float f, c;

    printf("\n Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = convertToCelsius(f);

    printf("\n Temperature in Celsius: %.2f°C", c);

    getch();
    return 0;
}

float convertToCelsius(float f)
{
    return (f - 32) * 5 / 9;
}
