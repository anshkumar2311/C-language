// #include <stdio.h>

// int main() {
//     int a[5] = {1, 5, 7, 19, 20};
//     int size = 5;
//     int b = 6;

//     a[size] = b;
//     size = size + 1;
//     for (int i = 0; i < size; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
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


#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int i;

    p = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        p[i] = i + 1; // Assign values to the allocated memory
    }

    printf("Values in allocated memory:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p); // Free the allocated memory

    return 0;
}
