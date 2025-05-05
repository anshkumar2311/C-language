#include <stdio.h>
int main(){

//   int marks[]={30,20,10,40,50}; //array of integer
//   char grade[]={'A','B','C','D','E'}; //array of character
//   char name[]={'A','N','S','H','\0','K'}; //array of char terminated by null character \0 is used to terminate the string after this no value is stored or printed
//   float percentage[]={30.5,20.5,10.5,40.5,50.5}; //array of float

//   printf("%d\n",marks[0]);
//   printf("%c\n",grade[1]);
//   printf("%s\n",name);
//   printf("%f\n",percentage[0]);





    // char name[] = "Ansh"; //{'A','N','S','H'}
    // char grades[5]={'A','B','C','D','E'};
    // printf("\naddress of grades:%u",&grades);
    // printf("\naddress pointed by grades:%u",grades);
    // printf("\nsize of grades array is %d",sizeof(grades));
    // printf("\nvalue pointed by grades is %c",*grades);

    int n =sizeof(grades)/sizeof(char);
    printf("\ngrades values are: ");
    for (int i =0;i<n;i++){
        printf("%c ",grades[i]);
    }





}
