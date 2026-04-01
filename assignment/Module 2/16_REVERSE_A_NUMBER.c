#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        rem  = temp % 10;
        rev  = rev * 10 + rem;
        temp = temp / 10;
    }
    printf("Reverse of %d is %d\n", num, rev);
    return 0;
}
