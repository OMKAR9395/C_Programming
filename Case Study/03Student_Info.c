///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//  Student Admission Detail Enter By Loop And Represent Data By Loop        //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Stud
{
    int Roll_No;
    char Name[30];
    int Phys;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std[3];
    printf("\n==================== Enter Student Details Here ==================");
    for(int i=0 ; i<3 ; i++)
    {
    printf("\n Enter Student Roll Number :");
    scanf("%d",&Std[i].Roll_No);

    printf("\n Enter Student Name :");
    scanf("%s",&Std[i].Name);

    fflush(stdin);

    printf("\n Enter Physics Marks :");
    scanf("%d",&Std[i].Phys);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&Std[i].Chem);

    printf("\n Enter Maths Marks :");
    scanf("%d",&Std[i].Maths);

    Std[i].Total = Std[i].Phys + Std[i].Chem + Std[i].Maths;
    Std[i].Per = (Std[i].Total / 300) * 100;
    }
    system("cls");
    getch();
    
    printf("\n================ You Entered Student Details Here ====================");
    for(int i=0;i<3;i++)
    {
    printf("\n\t\t Roll Number       = %d", Std[i].Roll_No);
    printf("\n\t\t Student Name      = %s", Std[i].Name);
    printf("\n\t\t Physics Marks     = %d", Std[i].Phys);
    printf("\n\t\t Chemistry Marks   = %d", Std[i].Chem);
    printf("\n\t\t Mathematics Marks = %d", Std[i].Maths);
    printf("\n\t\t Total Marks       = %0.3f", Std[i].Total);
    printf("\n\t\t Percentage        = %0.3f", Std[i].Per);
    printf("\n\n=====================================================================\n\n");

    }
    printf("\n================ Thanks For Using Our App ===================");
    getch();
    return 0;
}