#include <stdio.h>

float toCelsius(float f) {
    float c = (f - 32) * 5.0 / 9.0;
    return c;
}

int main() {
    float f;
    scanf("%f", &f);

    float c = toCelsius(f);
    printf("%.2f\n", c);

    return 0;
}

