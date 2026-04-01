#include <stdio.h>
#include <math.h>
int main() {
    for (int num = 1; num <= 1000; num++) {
        int temp = num, digits = 0, sum = 0, rem;
        while (temp) { digits++; temp /= 10; }
        temp = num;
        while (temp) { rem = temp % 10; sum += (int)pow(rem, digits); temp /=
10; } if (sum == num) printf("%d ", num);
    }
    printf("\n");
    return 0;
}
