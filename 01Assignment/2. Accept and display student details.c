#include <stdio.h>
#include <conio.h>
void acceptStudentDetails();

int main()
{
    acceptStudentDetails();
    getch();
    return 0;
}

void acceptStudentDetails()
{
    char name[50], course[50], city[50];
    int roll;

    printf("\n Enter Student Name: ");
    gets(name);

    printf("\n Enter Roll Number: ");
    scanf("%d", &roll);
    fflush(stdin);

    printf("\n Enter Course: ");
    gets(course);

    printf("\n Enter City: ");
    gets(city);

    printf("\n Student Name: %s, Roll Number: %d, Course: %s, City: %s", name, roll, course, city);
}
