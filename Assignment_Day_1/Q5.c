#include <stdio.h>

void alphabet(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("'%c' is an alphabet\n", ch);
        printf("After XOR with 32: %c\n", ch ^ 32);
    }
    else
    {
        printf("'%c' is NOT an alphabet\n", ch);
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

   alphabet(ch);

    return 0;
}