#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Before: x = %d\n", x);
    *ptr = 50;
    printf("After using pointer: x = %d\n", x);
    printf("Address of x: %p\n", ptr);
    return 0;
}
