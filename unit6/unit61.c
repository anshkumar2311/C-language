/*Built-in String Library Functions <string.h>
    strlen(s1): returns length of string s1
    strcpy(s1, s2): copies the string s2 into string s1 i.e. s1=s2;
    strcat(s1, s2): append (concatenate) string s2 after s1 i.e. s1=s1 append s2
    strcmp(s1, s2): compares values of two strings s1 and s2
    strncpy(s1,s2,n): copy first n chars from s1 into s1
    strncat(s1,s2,n): append(concatenate) first n characters from s2 into s1
    strncmp(s1,s2,n): cpmpares first n chars from s1 and s2
    strstr(s1, s2): returns substring from s1 starting with position of string s2 in string s1
    strchr(s1, ch): returns substring from s1 starting with position of character ch in s1
*/
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "Apple", s2[18]="Applets", s3[10]="Apples";
    //String lengths
    printf("\n Size of s1: %d bytes, Length of s1: %d chars", sizeof(s1), strlen(s1));//20,5
    printf("\n Size of s2: %d bytes, Length of s2: %d chars", sizeof(s2), strlen(s2));//18,7
    printf("\n Size of s3: %d bytes, Length of s3: %d chars", sizeof(s3), strlen(s3));//10,6
    //String Comparisons
    printf("\n strcmp(s1,s2): %d", strcmp(s1,s2)); //-116
    printf("\n strcmp(s2,s3): %d", strcmp(s2,s3)); //1
    printf("\n strncmp(s1,s2,5): %d", strncmp(s1,s2,5)); //0
    printf("\n strncmp(s2,s3,6): %d", strncmp(s2,s3,6)); //1
    printf("\n strncmp(s1,s2,4): %d", strncmp(s1,s2,4)); //0
    printf("\n strncmp(s2,s3,4): %d", strncmp(s2,s3,4)); //0
    //String copy
    strcpy(s1,s2);
    printf("\n After strcpy(s1,s2): s1 is %s and s2 is %s", s1, s2); //Applets, Applets
    strncpy(s1,"Mango", 2);
    printf("\n After strncpy(s1,\"Mango\",2): s1 is %s", s1); //Maplets
    //String concatenation
    strcat(s2,s3);
    printf("\n After strcat(s2,s3): s2 is %s and s3 is %s", s2, s3); //AppletsApples, Apples
    strncat(s2,"Mango",2);
    printf("\n After strncat(s2,\"Mango\",2): s2 is %s", s2); //AppletApplesMa
    //Find substring
    char *a = strstr(s3, "le");  //les
    printf("\n Found string le in s3 at index %d", strlen(s3)-strlen(a));
    //Find character in a String
    char *b = strchr(s3,'e');
    printf("\n Found character e in s3 at index %d", strlen(s3)-strlen(b));
}

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[20], s2[20], temp[20];
//     //Input
//     scanf("%s %s", s1, s2);
//     //Swap
//     strcpy(temp, s1);
//     strcpy(s1, s2);
//     strcpy(s2, temp);
//     //Print
//     printf("\nAfter swapping s1 is %s, s2 is %s", s1, s2);
// }
