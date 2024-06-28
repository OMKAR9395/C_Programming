#include <stdio.h>
#include <conio.h>
int main()
{
    int score;
    printf("enter your score between(1to100): ");
    scanf("%d",&score);
    switch(score / 10)
    {
    case 10:
    case 9:
        printf("\n your grade is A");
        break;
    case 8:
        printf("\n your grade is B");
        break;
    case 7:
        printf("\n your grade is C");
        break;
    case 6:
        printf("\n your grade is D");
        break;
    default:
        printf("\n your grade is F");
        break;
    }
    printf("\n thanks!");
    getch();
    return 0;
}
