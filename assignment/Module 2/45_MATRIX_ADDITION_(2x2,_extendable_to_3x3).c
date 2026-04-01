#include <stdio.h>
#define N 2
int main() {
    int A[N][N], B[N][N], C[N][N], i, j;
    printf("Enter Matrix A (%dx%d):\n", N, N);
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) scanf("%d", &A[i][j]);
    printf("Enter Matrix B (%dx%d):\n", N, N);
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) scanf("%d", &B[i][j]);

    printf("Result:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) { C[i][j] = A[i][j] + B[i][j]; printf("%d ",
C[i][j]); } printf("\n");
    }
    return 0;
}
