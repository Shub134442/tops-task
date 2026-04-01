#include <stdio.h>
struct Student {
    char name[50];
    int rollNo;
    float marks;
};
int main() {
    struct Student s[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].rollNo, &s[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 3; i++)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].rollNo,
s[i].marks); return 0;
}
