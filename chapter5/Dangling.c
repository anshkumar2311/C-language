#include <stdio.h>

int main() {
    int a[5] = {1, 5, 7, 19, 20};
    int size = 5;
    int b = 6;

    a[size] = b;
    size = size + 1;
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
// #include<stdio.h>
// int main(){
//     // int *p;
//     int x = 10;
//     float y = 20.5;

//     int *p;
//     float *q;
//     void *r;

//     //p = &y;//cannot assign float pointer to int pointer
//     //q = &x;//cannot assign int pointer to float pointer
//     r = &x;

//     // printf("\n %d", *p);
//     // printf("\n %f", *q);
//     printf("\n %d", *(int*)r);
// }
