#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int (*fp)(int);
    fp = square;

    int result = fp(n);
    printf("square(%d) = %d\n", n, result);

    return 0;
}

