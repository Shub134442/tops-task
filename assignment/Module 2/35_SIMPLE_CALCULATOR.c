#include <stdio.h>
int main() {
    float a, b, result;
    char op;
    printf("Enter: num operator num (e.g. 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) { printf("Division by zero!\n"); return 1; }
            result = a / b; break;
        case '%': result = (int)a % (int)b; break;
        default: printf("Invalid operator\n"); return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}
