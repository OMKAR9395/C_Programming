#include <stdio.h>
#include <conio.h>
int main()
{
 int n, sum =0;
 printf("Enter a Positive Integer: ");
 scanf("%d",&n);
 for(int i=1; i<=n; i++)
 {
     sum+=i;

 }
 printf("\n The Sum of Numbers From 1 to %d is %d",n, sum);
 printf("\n thanks");
 getch();
 return 0;

}
