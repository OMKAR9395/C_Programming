#include<stdio.h>
#include<conio.h>
int isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() 
{
    char str[100]='\0', temp=0;
    int i, j, length = 0;

    printf("Input a string: ");
    scanf("%s", str);

    for (length = 0; str[length] != '\0'; length++);

    for (i = 0, j = length - 1; i < j; ) 
    {
        while (i < j && !isVowel(str[i])) i++;
        while (i < j && !isVowel(str[j])) j--; 

    
        if (i < j) 
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    printf("Output: %s\n", str);

    getch();
    return 0;
}
