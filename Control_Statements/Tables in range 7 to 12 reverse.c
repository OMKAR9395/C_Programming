#include<stdio.h>
#include<conio.h>
int main()
{
  int R=0,C=0;
  printf("\n\n==============Tables in Range 7 To 12 ==================\n\n");
  for(R=1;R<=10;R++)
  {
      for(C=25;C>=5;C--)
      {
          printf("%3d",R*C);
      }
      printf("\n");
  }
  printf("\n\n===============Omkar Mohite=====================\n\n");
  getch();
  return 0;
}
