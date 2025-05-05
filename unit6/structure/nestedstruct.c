//Program to demonstrate NESTED STRUCTURES as nested structure variable
#include<stdio.h>
//Declare structured data type outside
struct date{
    int day, month, year;
};
struct product {
    int id;
    char name[10];
    float cost;
    int qty;
    // struct date{  //inside
    // int day, month, year;
    // } order_date
    struct date order_date;  //Nested Structure Variable
};
int main(){
    //Decalre structured variable and initialize it
    struct product p = {101, "Laptop", 50000, 2, {10,6,2005}};
    //Print
    printf("\nProduct Name: %s", p.name);
    printf("\nProduct ID: %d", p.id);
    printf("\nProduct Cost: Rs. %g", p.cost);
    printf("\nProduct Quantity: %d units", p.qty);
    printf("\nOrder Date: %d-%d-%d", p.order_date.day, p.order_date.month, p.order_date.year);
}
