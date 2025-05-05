#include <stdio.h>
#include <string.h>
int main(){
    //user defined data type

    //step1 : create a structured data type

    //demo
    // struct type_name{
    //     datatype membername1, membername7;
    //     datatype membername2;
    //     datatype membername3;
    //     ...
    //     datatype membernamen;
    // }; //mandatory semicolon


    struct product{
        int id;
        char name[10];
        float cost;
        int qty;
    } p ;


    //step 2: create variable of this structurd data type
    //demo
    // struct type_name variable;

    // struct product p;

    // struct product p = {101, "Laptop", 600000, 1};

    p = {101, "Laptop", 600000, 1};

    //Accessing members of stcture variable
    //demo
    //variable.membername  //this dot is dot operator

    // 1 way
    // p.id = 101;
    // // p.name = "laptop";
    // strcpy(p.name,"laptop");
    // p.cost=10000;
    // p.qty=1;

    //2nd Way
    // Error: Cannot use compound literal initialization directly with =
    // Need to use compound literal syntax or initialize at declaration
    // Correct ways:
    // 1. struct product p = {101, "Laptop", 600000, 1};  // At declaration
    // 2. p = (struct product){101, "Laptop", 600000, 1}; // Using compound literal
    // p = (struct product){101, "Laptop", 600000, 1};

    printf("Size of structure: %d bytes and address is %u\n", sizeof(p), &p);

    // Print each member with its address on separate lines
    printf("\nMember addresses and values:\n");
    printf("p.id:\tAddress: %u \tValue: %d \t%d bytes\n", &p.id, p.id,sizeof(p.id));
    printf("p.name:\tAddress: %u \tValue: %s \t%d bytes\n", &p.name, p.name,sizeof(p.name));
    printf("p.cost:\tAddress: %u \tValue: %.2f \t%d bytes\n", &p.cost, p.cost,sizeof(p.cost));
    printf("p.qty:\tAddress: %u \tValue: %d \t%d bytes\n", &p.qty, p.qty,sizeof(p.qty));

    // Print all members of structure p on one line (keeping this for reference)
    // printf("\nAll product details: %d %s %.2f %d\n", p.id, p.name, p.cost, p.qty);
}
