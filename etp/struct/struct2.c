// #include <stdio.h>
// struct vector{
//     int i;
//     int j;
// }v={1,2};
// int main(){
//     printf("%di + %dj\n",v.i,v.j);
//     printf("sum is %d",v.i+v.j);
// }


// #include <stdio.h>
// struct vector{
//     int i;
//     int j;
// };
// struct vector sumVector(struct vector v1 , struct vector v2){
//     struct vector v3 = {v1.i+v2.i, v1.j+v2.j};
//     return v3;
// }


// int main(){
//     struct vector v1 = {1,2};
//     struct vector v2 = {3,4};
//     struct vector v3 = sumVector(v1, v2);
//     printf("%di + %dj",v3.i, v3.j);
// }



// #include <stdio.h>
// typedef struct employees{
//     int salary;
//     float score;
// }emp;

// int main(){
//     emp e1;
//     emp* ptr = &e1;
//     ptr->salary=54000;
//     (*ptr).score=45.3;
//     printf("%d %.1f",ptr->salary, ptr->score);
// }



#include <stdio.h>
struct complex{
    int real;
    int img;
}com;
int main(){
    com c=
}
