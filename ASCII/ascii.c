#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    //or if (ch>=48 && ch<=57)  or if(isdigit(ch))
    // if (ch>='0' && ch <='9')
    // {
    //     printf("It is a digit");
    // }
    // else
    // {
    //     printf("It is not a digit");
    // }


    //check alphabet or not
    //if (isupper(ch)) || (islower(ch))
    if ((ch>='A' && ch <='Z') || (ch>='a' && ch <='z'))
    {
        printf("It is a alphabet ");
    }
    else
    {
        printf("It is not a alphabet");
    }


    //lower and upper case
    // if (ch>='A' && ch <='Z')
    // {
    //     printf("It is a upper case");
    // }
    // else
    // {
    //     printf("It is not a upper case");
    // }


    return 0;
}


// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);

//     printf("ASCII value of %c is %d",ch,ch);

//     return 0;
// }


//convert ascii to character

// #include <stdio.h>

// int main()
// {
//     int ascii;
//     printf("Enter a ASCII value: ");
//     scanf("%d",&ascii);

//     printf("Character of %d is %c and next character is %c",ascii,ascii,ascii+1);

//     return 0;
// }


//check weather is digit or not
