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

    Std.Roll_No = 15;
    strcpy(Std.Name, "Prathmesh Bhujbal");
    Std.Phys = 75;
    Std.Chem = 80;
    Std.Maths = 88;

    Std.Total = Std.Phys + Std.Chem + Std.Maths;
    Std.Per = (Std.Total / 300) * 100;

    printf("\n Roll_Number = %d",Std.Roll_No);
    printf("\n Name = %s",Std.Name);
    printf("\n Total Marks = %f",Std.Total);
    printf("\n Percentage = %0.3f",Std.Per);

    printf("\n Thanks For Using Our Application");

    getch();
    return 0;
}
