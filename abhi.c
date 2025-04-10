// #include <stdio.h>

// int sumEvenValues(int *arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         if (*(arr + i) % 2 == 0) {
//             sum += *(arr + i);
//         }
//     }
//     return sum;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int sum = sumEvenValues(arr, size);
//     printf("Sum of even values: %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    double arr[10];
    double *ptr = arr;

    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%lf", (ptr + i));
    }

    printf("\nElements in reverse order:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%.2lf ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
