#include <stdio.h>

struct Student {
    char name[40];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%39s", students[i].name);

        printf("Enter roll: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    int maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Top student\n");
    printf("Name  : %s\n", students[maxIndex].name);
    printf("Roll  : %d\n", students[maxIndex].roll);
    printf("Marks : %.2f\n", students[maxIndex].marks);

    return 0;
}

