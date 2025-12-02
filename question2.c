#include <stdio.h>

int max3(int a, int b, int c) {
    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int m = max3(a, b, c);
    printf("%d\n", m);

    return 0;
}

