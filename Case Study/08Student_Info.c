//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//  Student Admission Detail Enter By Structure Pointer Function            //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[50];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
void Accept_Student_Details(struct Stud* sPtr,int Cnt);
void Display_Student_Details(struct Stud* sPtr,int Cnt);
void How_Many_Student(int* Cnt, struct Stud** sPtr);
int main()
{
    int* Cnt = 0;
    struct Stud *Stdptr;

    How_Many_Student(Cnt,Stdptr);

    Accept_Student_Details(Stdptr,Cnt);


    Display_Student_Details(Stdptr,Cnt);

    printf("\n Thanks For Using Our Application !!");
    getch();
    return 0;

}
void How_Many_Student(int* Cnt, struct Stud** sPtr)
{
    printf("\n Enter Count Of Student :");
    scanf("%d",&Cnt);

    *sPtr = (struct Stud*) malloc (*Cnt * sizeof(struct Stud));

    if (sPtr == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }


}
void Accept_Student_Details(struct Stud* sPtr,int Cnt)
{
    for(int i=0; i<Cnt; i++)
    {
            printf("\n Enter Student Details :%d",i+101);
            sPtr[i].Roll_No = i+101;

            fflush(stdin);

            printf("\n Enter Student Name : ");
            gets(sPtr[i].Name);

            printf("\n Enter Physics Marks : ");
            scanf("%d", &sPtr[i].Phy);

            printf("\n Enter Chemistry Marks : ");
            scanf("%d", &sPtr[i].Chem);

            printf("\n Enter Mathematics Marks : ");
            scanf("%d", &sPtr[i].Maths);

            sPtr[i].Total = sPtr[i].Phy + sPtr[i].Chem + sPtr[i].Maths;

            sPtr[i].Per = (sPtr[i].Total / 3);
            getch();
    }
            return;
}
void Display_Student_Details(struct Stud* sPtr,int Cnt)
{
     printf("==========================You Entered Student Details Are Here =============================\n");
    for(int i=0;i<Cnt;i++)
    {
            printf("\n\t\t Roll Number       = %d", sPtr[i].Roll_No);
            printf("\n\t\t Student Name      = %s", sPtr[i].Name);
            printf("\n\t\t Physics Marks     = %d", sPtr[i].Phy);
            printf("\n\t\t Chemistry Marks   = %d", sPtr[i].Chem);
            printf("\n\t\t Mathematics Marks = %d", sPtr[i].Maths);
            printf("\n\t\t Total Marks       = %0.0f", sPtr[i].Total);
            printf("\n\t\t Percentage        = %0.3f", sPtr[i].Per);

            printf("\n\n =====================Thank You======================= ");

            getch();
    }
            return;
}
