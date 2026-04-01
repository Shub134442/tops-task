#include <stdio.h>
int main() {
    int i, num, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) { evenCount++; evenSum += num; }
        else               { oddCount++;  oddSum  += num; }
    }
    printf("Even count: %d, Sum of evens: %d\n", evenCount, evenSum);
    printf("Odd count: %d, Sum of odds: %d\n",  oddCount,  oddSum);
    return 0;
}
