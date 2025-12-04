#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("How many integers? ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    float avg = (float)sum / n;
    printf("Average: %.2f\n", avg);

    free(arr);

    return 0;
}

