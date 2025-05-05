#include <stdio.h>
#include <string.h>

//declare the structurd varialbe
struct product {
    int id;
    char name[10];
    float cost;
    int qty;
};
void input(struct product *ptr){
    printf("Enter product id: ");
    scanf("%d", &ptr->id);
    printf("Enter product name: ");
    scanf("%s", ptr->name); // We don't use & because name is an array, and arrays decay to pointers automatically
    printf("Enter product cost: ");
    scanf("%f", &(*ptr).cost);
    printf("Enter product quantity: ");
    scanf("%d", &ptr->qty);
}
void print(struct product a){
    printf("\nProduct name : %s",a.name);
    printf("\nProduct id: %d", a.id);
    printf("\nProduct cost: %g", a.cost);
    printf("\nProduct quantity: %d", a.qty);

}
int main(){
    struct product p;
    input(&p);
    print(p);
}
