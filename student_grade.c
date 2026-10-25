#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float average;

    printf("STUDENT GRADE MANAGEMENT SYSTEM\n");

    printf("Enter student name: ");
    scanf(" %49[^\n]", name);

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100) {
        printf("Invalid marks!\n");
        return 0;
    }

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("\n--- STUDENT RESULT ---\n");
    printf("Name: %s\n", name);
    printf("Total Marks: %d/300\n", total);
    printf("Average: %.2f\n", average);

    if (m1 < 35 || m2 < 35 || m3 < 35)
        printf("Grade: Fail\n");
    else if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: D\n");

    return 0;
}
