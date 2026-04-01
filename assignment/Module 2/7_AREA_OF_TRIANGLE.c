#include <stdio.h>
int main() {
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    printf("Area of Triangle: %.2f\n", 0.5 * b * h);
    return 0;
}
