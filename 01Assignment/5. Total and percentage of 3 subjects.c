#include <stdio.h>
#include <conio.h>

float calculatePercentage(int total)
{
    return (total / 3.0);
}

int main()
{
    int m1, m2, m3, total;
    float percentage;

    printf("\n Enter Marks in Subject 1: ");
    scanf("%d", &m1);

    printf("\n Enter Marks in Subject 2: ");
    scanf("%d", &m2);

    printf("\n Enter Marks in Subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    percentage = calculatePercentage(total);

    printf("\n Total Marks: %d, Percentage: %.2f%%", total, percentage);

    getch();
    return 0;
}
