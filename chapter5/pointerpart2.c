

#include<stdio.h>
int main(){
        // declare the simple variable
    int a = 10;
    float b = 20.5;

    // declare the pointer variable
    int *p;  // pointer to int
    float *q;

    // assign the address of the variable to the pointer
    //ptr_name = &variable_name;
    p = &a;
    q = &b;


    // print the address of the variable
    printf("\n a is %d and &a is %u",a, &a);  // %u is used for address
    printf("\n p is %u and &a is %u", p, &p);
    printf("\n *p is %d\n", *p);              // dereferencing the pointer        value at p

    *p = 320;
    printf("\n a is %d and &a is %u", a, &a); // %u is used for address
    printf("\n p is %u and &a is %u", p, &p);
    printf("\n *p is %d\n", *p);


    printf("\n b is %f and &b is %u", b, &b); // %u is used for address
    printf("\n q is %u and &b is %u", q, &q);
    printf("\n *q is %f\n", *q);

}

