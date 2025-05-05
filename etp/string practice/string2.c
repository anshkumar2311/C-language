// #include <stdio.h>

// int strle(char str[]){
//     int i =0,count;
//     char c = str[i];
//     while(c!='\0'){
//         c=str[i];
//         i++;
//     }
//     count = i-1;
//     return count;
// }

// int main(){
//     char str[]="Ansh";

//     printf("%d",strle(str));
// }



// #include <stdio.h>
// #include <string.h>
// int main(){
//     char st[]="Ansh";
//     for (int i = 0; i< strlen(st);i++){
//         st[i]=st[i]+1;
//     }
//     printf("%s",st);
// }



#include <stdio.h>
#include <string.h>
int main(){
    char c = 'a';
    int count = 0;
    int counter;
    char st[]="ansh kumar";
    for (int i = 0; i< strlen(st);i++){
        if (st[i]==c)
            count ++;
            counter = 1;
    }
    if(counter){
        printf("yes it is");
    }
    else{
        printf("No its not");
    }
    printf("%d",count);
}
