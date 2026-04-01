#include <stdio.h>
int main() {
    float cp, sp;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp)
        printf("Profit: %.2f\n", sp - cp);
    else if (sp < cp)
        printf("Loss: %.2f\n", cp - sp);
    else
        printf("No Profit No Loss\n");

    return 0;
}
