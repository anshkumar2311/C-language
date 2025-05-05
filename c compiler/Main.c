#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>=48 && ch<=57)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}