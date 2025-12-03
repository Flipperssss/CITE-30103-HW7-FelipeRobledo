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

    printf("\n%-15s\t%-6s\t%-6s\n", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-15s\t%6d\t%6.2f\n",
               students[i].name,
               students[i].roll,
               students[i].marks);
    }

    return 0;
}

