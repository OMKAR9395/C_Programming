#include <stdio.h>
#include <conio.h>
int main()
{
    int score;
    printf("Enter Your Score Between(1to100): ");
    scanf("%d",&score);
    switch(score / 10)
    {
    case 10:
    case 9:
        printf("\n Your Grade is A");
        break;
    case 8:
        printf("\n Your Grade is B");
        break;
    case 7:
        printf("\n Your Grade is C");
        break;
    case 6:
        printf("\n Your Grade is D");
        break;
    default:
        printf("\n Your Grade is F");
        break;
    }
    printf("\n Thanks!");
    getch();
    return 0;
}
