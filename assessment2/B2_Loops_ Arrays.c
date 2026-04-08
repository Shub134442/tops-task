#include <stdio.h>

int main() {
    float hours[7];
    float total = 0, average;
    char *days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for (int i = 0; i < 7; i++) {
        printf("Enter study hours for %s: ", days[i]);
        scanf("%f", &hours[i]);
        total += hours[i];
    }

    average = total / 7.0f;
    printf("\nTotal Hours : %.2f\n", total);
    printf("Average/Day : %.2f\n", average);

    if (average < 4.0)
        printf("WARNING: Average study time is low! Aim for at least 4 hrs/day.\n");
    else
        printf("Good performance! Keep it up!\n");

    return 0;
}
