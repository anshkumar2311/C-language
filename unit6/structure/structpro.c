#include <stdio.h>
#include <string.h>
struct product {
    int id;
    char name[10];
    float cost;
    int qty;
};
int main(){
    //declare and initilize
    struct product p ;
    ////pointer declare
    struct product *ptr;
    //assign address to ptr
    ptr = &p;

    //take input
    printf("Enter product id: ");
    scanf("%d", &p.id);
    printf("Enter product name: ");
    scanf("%s", ptr->name); // We don't use & because name is an array, and arrays decay to pointers automatically
    printf("Enter product cost: ");
    scanf("%f", &(*ptr).cost);
    printf("Enter product quantity: ");
    scanf("%d", &ptr->qty);

    printf("Product name: %s",(*ptr).name); //using dot operatot
    printf("\nProduct cost: %g",ptr->cost); //using arrow operator
    printf("\nProduct id: %d",ptr->id); //using arrow operator
    printf("\nProduct quantity: %d",(*ptr).qty); //using dot operator

}
