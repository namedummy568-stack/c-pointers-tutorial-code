#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; // Declare an integer pointer

    ptr = &num; // Store the address of 'num' in 'ptr'

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value at the address ptr points to: %d\n", *ptr);

    *ptr = 20; // Change the value of num using the pointer

    printf("New value of num: %d\n", num);

    // Pointers and Arrays example
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // 'p' points to the first element of 'arr' (arr[0])

    printf("\nValue of arr[0] using pointer: %d\n", *p);
    printf("Value of arr[1] using pointer arithmetic: %d\n", *(p + 1));

    // Pointers and Functions example
    int x = 5;
    printf("\nBefore increment: %d\n", x);
    increment(&x); // Pass the address of 'x'
    printf("After increment: %d\n", x);

    // Null Pointers example
    int *nullPtr = NULL;
    printf("\nValue of nullPtr: %p\n", nullPtr);

    return 0;
}

void increment(int *val) {
    (*val)++; // Increment the value at the address pointed to by 'val'
}