#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Pointer ptr (address it stores): %p\n", (void*)ptr);
    printf("Dereferenced ptr: %d\n", *ptr);

    return 0;
}

