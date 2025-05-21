#include"omkar.h"

int main()
{
    int choice, num, result, digit, even, odd, zero;
    printf("\n Enter a number: ");
    scanf("%d",&num);

    do
    {
        system("cls");
        printf("\n\n==========================*****==========================\n");
        printf("\n\n--- Digit Menu Driven Application---");
        printf("\n 1. Sum of digits");
        printf("\n 2. Multiply digits");
        printf("\n 3. Count digits");
        printf("\n 4. Count even digits");
        printf("\n 5. Count odd digits");
        printf("\n 6. Count even, odd, zero");
        printf("\n 7. Difference (even - odd sum)");
        printf("\n 8. Max digit");
        printf("\n 9. Min digit");
        printf("\n10. Count zeros");
        printf("\n11. Frequency of 2");
        printf("\n12. Contains 2 or not");
        printf("\n13. Frequency of entered digit");
        printf("\n14. If 5-digit number, sum digits");
        printf("\n15. Reverse number");
        printf("\n16. Reverse 4-digit number");
        printf("\n17. Palindrome check (reverse)");
        printf("\n18. Palindrome check (no reverse)");
        printf("\n19. In-place reverse");
        printf("\n20. Print digits in reverse");
        printf("\n 0. Exit");

        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Sum = %d", sumDigits(num));
                getch();
                system("cls");
                break;

            case 2:
                printf("Multiplication = %d", multiplyDigits(num));
                getch();
                system("cls");
                break;

            case 3:
                printf("Digit count = %d", countDigits(num));
                getch();
                system("cls");
                break;

            case 4:
                printf("Even digits = %d", countEvenDigits(num));
                getch();
                system("cls");
                break;

            case 5:
                printf("Odd digits = %d", countOddDigits(num));
                getch();
                system("cls");
                break;

            case 6:
                even = odd = zero = 0;
                countDigitTypes(num, &even, &odd, &zero);
                printf("Even = %d, Odd = %d, Zeros = %d", even, odd, zero);
                getch();
                system("cls");
                break;

            case 7:
                printf("Difference = %d", calculateEvenOddDiff(num));
                getch();
                system("cls");
                break;

            case 8:
                printf("Max digit = %d", findMaxDigit(num));
                getch();
                system("cls");
                break;

            case 9:
                printf("Min digit = %d", findMinDigit(num));
                getch();
                system("cls");
                break;

            case 10:
                printf("Zero count = %d", countZeros(num));
                getch();
                system("cls");
                break;

            case 11:
                printf("Frequency of 2 = %d", countTwoFrequency(num));
                getch();
                system("cls");
                break;

            case 12:
                if(containsTwo(num))
                {

                    printf("Contains 2");
                    getch();
                system("cls");
                }
                else
                   {


                    printf("No 2 found");
                    getch();
                system("cls");
                   }
                break;

            case 13:
                printf("Enter digit to count: ");
                scanf("%d", &digit);
                printf("Frequency of %d = %d", digit, countDigitFrequency(num, digit));
                getch();
                system("cls");
                break;

            case 14:
                if(isFiveDigit(num))
                    {
                        printf("Sum = %d", sumOfDigits(num));
                    getch();
                system("cls");
                    }
                else
                    {

                    printf("Invalid input");
                getch();
                system("cls");
                    }
                break;

            case 15:
                printf("Reverse = %d", reverseNumber(num));
                getch();
                system("cls");
                break;

            case 16:
                if(isFourDigit(num))
                {


                    printf("Reverse = %d", reverseNumber(num));
                    getch();
                system("cls");
                }
                else
                {


                    printf("Not a 4-digit number.");
                    getch();
                system("cls");
                }
                break;

            case 17:
                if(isPalindrome(num))
                    {
                        printf("Palindrome");
                    getch();
                system("cls");
                    }
                else
                    {
                        printf("Not a palindrome");
                    getch();
                system("cls");
                    }
                break;

            case 18:
                if(checkPalindromeNoReverse(num))
                   {
                        printf("Palindrome");
                    getch();
                system("cls");
                   }
                else
                    {
                        printf("Not a palindrome");
                    getch();
                system("cls");
                    }
                break;

            case 19:
                inplaceReverse(&num);
                printf("In-place reverse = %d", num);
                getch();
                system("cls");
                break;

            case 20:
                printDigitsReverse(num);
                getch();
                system("cls");
                break;

            case 0:
                printf("Thank You For Using Our Application...");

                break;

            default:
                printf("Invalid choice.");
                getch();
                system("cls");
        }

    } while(choice != 0);

    return 0;
}
