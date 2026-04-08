#include <stdio.h>

void swapHours(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float day1, day2;
    printf("Enter study hours for Day 1: ");
    scanf("%f", &day1);
    printf("Enter study hours for Day 2: ");
    scanf("%f", &day2);

    printf("Before Swap: Day1=%.2f, Day2=%.2f\n", day1, day2);
    swapHours(&day1, &day2);
    printf("After Swap : Day1=%.2f, Day2=%.2f\n", day1, day2);

    return 0;
}
