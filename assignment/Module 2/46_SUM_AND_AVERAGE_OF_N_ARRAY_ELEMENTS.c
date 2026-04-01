#include <stdio.h>
int main() {
    int n, i, arr[100], sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) { scanf("%d", &arr[i]); sum += arr[i]; }
    printf("Sum: %d, Average: %.2f\n", sum, (float)sum / n);
    return 0;
}
