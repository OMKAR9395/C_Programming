#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
    int Roll_No;
    char Name[12];
    char City[8];
    float Per;
};
int main()
{
    int i=0,Scnt=0;
    struct Student *Sptr = NULL;

    printf("\n Enter How Many Student Do You Have: ");

    Sptr = (struct Student*)calloc(Scnt,sizeof(struct Student));
    for(i=0;i<Scnt;i++)
    {
        printf("\n Enter Roll No :");
        scanf("%d",&Sptr[i].Roll_No);

        fflush(stdin);

        printf("\n Enter Name :");
        scanf("%[^\n]",&Sptr[i].Name);

        fflush(stdin);

        printf("\n Enter City :");
        scanf("%[^\n]",&Sptr[i].City);

        fflush(stdin);

        printf("\n Enter Percentage :");
        scanf("%f",&Sptr[i].Per);
    
    }
    for(i=0;i<Scnt;i++)
    {
        printf("\n %d Student Details Given Are =>\n\n\t Roll No - %d \n\t City -%S.\n\t Percentage -%0.3f.\n",i+1,Sptr[i].Roll_No,Sptr[i].Name,Sptr[i].City,Sptr[i].Per);

    }
    getch();
    return 0;
    
}
