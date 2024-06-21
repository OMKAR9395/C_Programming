#include <stdio.h>
#include <conio.h>
int main()
{
    int score;
        printf("enter your exam score: ");
        scanf("%d",&score);
    if (score>= 90)
    {
        printf("\n your grade is A.");
    }
    else if (score>= 80)
    {
        printf("\n your grade is B.");
    }
    else if (score>= 70)
    {
        printf("\n your grade is C.");
    }
    else if (score>= 60)
    {
        printf("\n your grade is D.");
    }
    else if (score>= 50)
    {
        printf("\n your grade is E.");
    }
    else
    {
        printf("\n your grade is f.");
    }
    printf("\n thanks.");
    getch();

    return 0;
}
