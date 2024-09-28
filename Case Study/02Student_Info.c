//////////////////////////////////////////////////////////////////
//                                                              //
//    Student Information For Admission                         //
//                                                              //
//                                                              //
//////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Stud
{
    int Roll_No;
    char Name[80];
    int Phys;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;

    printf("\n Enter Student Roll Number :");
    scanf("%d",&Std.Roll_No);

    printf("\n Enter Student Name :");
    scanf("%s",&Std.Name);

    fflush(stdin);

    printf("\n Enter Physics Marks :");
    scanf("%d",&Std.Phys);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&Std.Chem);

    printf("\n Enter Maths Marks :");
    scanf("%d",&Std.Maths);

    Std.Total = Std.Phys + Std.Chem + Std.Maths;
    Std.Per = (Std.Total / 300) * 100;

    getch();
    printf("\n====================Enter Any Key =========================\n");

    printf("\n\t\t Roll Number       = %d", Std.Roll_No);
    printf("\n\t\t Student Name      = %s", Std.Name);
    printf("\n\t\t Physics Marks     = %d", Std.Phys);
    printf("\n\t\t Chemistry Marks   = %d", Std.Chem);
    printf("\n\t\t Mathematics Marks = %d", Std.Maths);
    printf("\n\t\t Total Marks       = %0.3f", Std.Total);
    printf("\n\t\t Percentage        = %0.3f", Std.Per);

    printf("\n=============================Thanks For Using Our Application ===================");
    getch();
    return 0;
}
