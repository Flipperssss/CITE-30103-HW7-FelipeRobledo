#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[100];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even %d\n", even);
    printf("Odd %d\n", odd);

    return 0;
}

