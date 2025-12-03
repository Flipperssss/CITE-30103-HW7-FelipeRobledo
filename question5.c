#include <stdio.h>

long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Error\n");
    } else {
        long f = factorial(n);
        printf("%ld\n", f);
    }

    return 0;
}

