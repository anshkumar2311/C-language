#include <stdio.h>
int main(){
    int num, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        fact *= i;
    }
    printf("%d",fact);
    return 0;
}


// #include <stdio.h>
// int main(){
//     for (int i = 10; i > 0; i--){
//         printf("%d\n", i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a = 1;
//     do{
//         printf("%d\n", a);
//         a++;
//     }
//     while (a <= 5);
//     return 0;
// }

// #include <stdio.h>
// int Count(int n, int b)
// {
//     n++;
//     printf("%d\n", n);
//     if (n < b)
//     {
//         return Count(n, b);
//     }
//     return n;
// }
// int main()
// {
//     Count(0, 5);
//     return 0;
// }
