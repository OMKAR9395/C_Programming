#include <stdio.h>
#include <conio.h>
int main()
{
 int number;
 do
 {
     printf("enter between number 1 to 10: ");
     scanf("%d",number);
 }
 while(number<1 || number> 10);
 printf("you entered: %d\n",number);
 getch();
 return 0;
}
