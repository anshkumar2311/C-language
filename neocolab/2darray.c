// #include <stdio.h>
// int main()
// {
//     // dataype array_name[rows][columns]; //syntax
//     int matrix[3][4];

//     //assigning values to the matrix
//     matrix[0][0] = 1;
//     matrix[0][1] = 2;
//     matrix[0][2] = 3;
//     matrix[0][3] = 4;
//     matrix[1][0] = 5;
//     matrix[1][1] = 6;
//     matrix[1][2] = 7;
//     matrix[1][3] = 8;
//     matrix[2][0] = 9;
//     matrix[2][1] = 10;
//     matrix[2][2] = 11;
//     matrix[2][3] = 12;

//     //printing the matrix
//     printf("Matrix:\n");
//     printf("%d %d %d %d\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]);
//     printf("%d %d %d %d\n", matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]);
//     printf("%d %d %d %d\n", matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]);
//     return 0;
// }




// #include <stdio.h>
// int main() { int matrix[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 14, 12}}; printf("Matrix:\n"); printf("%d %d %d %d\n", matrix[0][0], matrix[0][1], matrix[0][2], matrix[0][3]); printf("%d %d %d %d\n", matrix[1][0], matrix[1][1], matrix[1][2], matrix[1][3]); printf("%d %d %d %d\n", matrix[2][0], matrix[2][1], matrix[2][2], matrix[2][3]); return 0; }




// int matrix[][4] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 }; //i can miss no of rows but not columns

// #include<stdio.h>
// int main(){
//     printf("2D Array\n");
//     int arr[3][4] = {
//         {1,2,3,10},
//         {4,5,6,11},
//         {7,8,9,12}
//     };
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() { printf("2D Array\n"); int arr[3][4] = {{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 12}}; for (int i = 0; i < 3; i++) { for (int j = 0; j < 4; j++) { printf("%d ", arr[i][j]); } printf("\n"); } return 0; }
