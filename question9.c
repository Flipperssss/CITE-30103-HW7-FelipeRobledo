#include <stdio.h>

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = 4;

    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

