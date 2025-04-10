#include<stdio.h>

int main(){


    //pointer => it sores the adrres of another variable

    //syntax
    //datatype *pointer_name;    or      // datatype* pointer_name;

    //int *p; // p will store the address of an integer variable
    //float *q; // q will store the address of a float variable
    //char *r; // r will store the address of a char variable

    //int a = 10;
    //int *p = &a; // p stores the address of a

    int *p;
    char *r;
    float *q;
    double *s;
    long double *t;
    printf("\n size of pointer p is %d bytes", sizeof(p));
    printf("\n size of pointer r is %d bytes", sizeof(r));
    printf("\n size of pointer q is %d bytes", sizeof(q));
    printf("\n size of pointer s is %d bytes", sizeof(s));
    printf("\n size of pointer t is %d bytes", sizeof(t));
    printf("\n size of value pointed by p is %d bytes", sizeof(*p));
    printf("\n size of value pointed by r is %d bytes", sizeof(*r));
    printf("\n size of value pointed by q is %d bytes", sizeof(*q));
    printf("\n size of value pointed by s is %d bytes", sizeof(*s));
    printf("\n size of value pointed by t is %d bytes", sizeof(*t));
}
