#include <stdio.h>

struct Course {
    char name[50];
    int grade;
};

struct Student {
    char name[50];
    int id;
    struct Course courses[3];
};

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter ID: ");
    scanf("%d", &student.id);

    for (int i = 0; i < 3; i++) {
        printf("Enter course name: ");
        scanf("%s", student.courses[i].name);

        printf("Enter grade: ");
        scanf("%d", &student.courses[i].grade);
    }

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);

    float total = 0;
    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", student.courses[i].name, student.courses[i].grade);
        total += student.courses[i].grade;
    }
    float average = total / 3.0;
    printf("Average Grade: %.2f\n", average);

    return 0;
}