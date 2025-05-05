//Q1 take str input and otput using both c and s

//using %s
// #include <stdio.h>
// int main(){
//     char st[20];
//     scanf("%s",st);
//     printf("%s",st);
// }

//using %c
#include <stdio.h>
int main(){
    char st[6];
    for (int i = 0;i<5;i++){
        scanf(" %c",&st[i]);  //like abhi hm enter bhi karenge to vo bhi ek carr count thoga usse bachne ke liye
        fflush(stdin);
    }
    st[5]='\0';
    printf("%s",st);
}
