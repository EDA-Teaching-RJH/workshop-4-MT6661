#include <stdio.h>

int main() {

    int num = 42;
    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value stored in ptr: %p\n", (void*)ptr);

    *ptr = 100;

    printf("Modified value of num: %d\n", *ptr);

    int arr[5] = {10, 20, 30, 40, 50};
    int *arrPtr = arr;
    printf("Original array: \n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arrPtr + i));
    }
    printf("\nModified array:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]*=2);
    }

    return 0;
}