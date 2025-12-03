#include <stdio.h>

int main() {
    char s[101];
    fgets(s, 101, stdin);

    int words = 0;
    int inWord = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("%d\n", words);

    return 0;
}

