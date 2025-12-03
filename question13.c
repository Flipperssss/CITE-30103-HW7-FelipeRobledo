#include <stdio.h>

int main() {
    char s[101];
    int vowels = 0;
    int cons = 0;
    int digits = 0;

    fgets(s, 101, stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            digits++;
        } else if (c >= 'A' && c <= 'Z') {
            char x = c + 32;
            if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u') vowels++;
            else cons++;
        } else if (c >= 'a' && c <= 'z') {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else cons++;
        }
    }

    printf("Vowels %d\n", vowels);
    printf("Consonants %d\n", cons);
    printf("Digits %d\n", digits);

    return 0;
}

