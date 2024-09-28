#include<stdio.h>
#include<conio.h>
struct Student 
{
    char name[15];
    int roll;
    float marks;
};

int main() 
{
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);
    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Display the student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    getch;
    return 0;
}
