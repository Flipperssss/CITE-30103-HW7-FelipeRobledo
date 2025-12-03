#include <stdio.h>

int main() {
    int n;
    int a[100];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    float avg = sum * 1.0 / n;

    printf("Sum %d\n", sum);
    printf("Average %.2f\n", avg);

    return 0;
}

