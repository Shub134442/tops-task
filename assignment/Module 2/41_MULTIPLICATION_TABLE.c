#include <stdio.h>
int main() {
    int n, range;
    printf("Enter number and range: ");
    scanf("%d %d", &n, &range);
    for (int i = 1; i <= range; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
