#include <stdio.h>
#include <conio.h>
int main()
{
 int n, sum =0;
 printf("enter a positive integer: ");
 scanf("%d",&n);
 for(int i=1; i<=n; i++)
 {
     sum+=i;

 }
 printf("\n the sum of numbers from 1 to %d is %d",n, sum);
 printf("\n thanks");
 getch();
 return 0;

}
