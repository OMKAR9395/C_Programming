#include <stdio.h>
#include <conio.h>

float convertToMeters(float km);  // Function Prototype

int main()
{
    float km, meters;

    printf("\n Enter Distance in Kilometers: ");
    scanf("%f", &km);

    meters = convertToMeters(km);

    printf("\n Distance in meters: %.0f meters", meters);

    getch();
    return 0;
}

float convertToMeters(float km)
{
    return km * 1000;
}
