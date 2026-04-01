#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int C[20][20] = {0};
    for (i = 0; i < n; i++) {
        C[i][0] = 1;
        for (j = 1; j <= i; j++) C[i][j] = C[i-1][j-1] + C[i-1][j];
        for (j = 0; j <= i; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
