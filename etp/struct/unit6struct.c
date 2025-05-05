// #include <stdio.h>
// struct car{
//     char *name;
//     int seat;
//     float price;
// };
// int main(){
//     struct car mycar;
//     mycar.name="BMW";
//     mycar.price=6000000.00;
//     mycar.seat= 2;
//     printf("%s \n%d \n%f",mycar.name,mycar.seat,mycar.price);
// }





// #include <stdio.h>
// #include <string.h>
// struct car{
//     char name[50];
//     int seat;
//     float price;
// };
// int main(){
//     struct car mycar;
//     printf("Enter car name: ");
//     fgets(mycar.name, sizeof(mycar.name), stdin);  //gets
//     printf("Enter no of seats: ");
//     scanf("%d",&mycar.seat);
//     printf("Enter price of car: ");
//     scanf("%f",&mycar.price);
//     printf("\n\nCar species are: \n");
//     printf("Car name : %s\n",mycar.name);
//     puts(mycar.name);  //puts
//     printf("\nCar price : %.2f\n",mycar.price);
//     printf("Car seats : %d",mycar.seat);
// }






#include <stdio.h>
#include <string.h>
struct car{
    char name[50];
    int seat;
    float price;
};
int main(){
    struct car mycar,cars;
    printf("Enter car name: ");
    fgets(mycar.name, sizeof(mycar.name), stdin);
    printf("Enter no of seats: ");
    scanf("%d",&mycar.seat);
    printf("Enter price of car: ");
    scanf("%f",&mycar.price);
    printf("\n\nCar species are: \n");
    printf("Car name : %s\n",mycar.name);
    puts(mycar.name);
    cars=mycar;  //replace struct
    printf("\nCar price : %.2f\n",cars.price);
    printf("Car seats : %d",cars.seat);
}



// #include<stdio.h>
// struct employees{
//     char name[20];
//     int rollno;
//     float salary;
// };
// int main(){
//     struct employees e1={"Smith",2,55.0};
//     printf("%s %d",e1.name,e1.rollno);
//     return 0;
// }




// #include<stdio.h>
// struct student{
//     // int a =10; /it give error
//     int a;
// }v1={10};
// int main(){
//     printf("%d",v1.a);
// }





// #include <stdio.h>
// struct student{
//     char name[20];
//     int roll_no;
//     float fees;
// }v1={"ansh",14,5464665.5},v2={"Abhi",456454.45};
// int main(){
//     printf("%d",v2.roll_no);
// }
