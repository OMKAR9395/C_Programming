#include<stdio.h>
#include<conio.h>
struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person person1;
    printf("Enter Person name: ");
    scanf("%s",&person1.name);
    printf("Enter age: ");
    scanf("%d",&person1.age);
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    getch();
    return 0;
}

