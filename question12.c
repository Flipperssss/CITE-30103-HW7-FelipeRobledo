#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);

    int left = 0;
    int right = 0;

    while (s[right] != '\0') {
        right++;
    }
    right--;

    int ok = 1;

    while (left < right) {
        if (s[left] != s[right]) {
            ok = 0;
            break;
        }
        left++;
        right--;
    }

    if (ok) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

