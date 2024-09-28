#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i=1; i <=100; i++)
    {
    if (i% 2 == 0)
        {
            sum += i;
        }
    }
    printf("\n The Sum of Even Numbers of 1 to 100 is %d",sum);
    printf("\n Thanks!");
    getch();
    return 0;
}
