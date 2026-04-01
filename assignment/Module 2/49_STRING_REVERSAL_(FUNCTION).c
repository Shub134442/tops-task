#include <stdio.h>
#include <string.h>
void reverseStr(char *str) {
    int len = strlen(str), i;
    char temp;
    for (i = 0; i < len / 2; i++) {
        temp = str[i]; str[i] = str[len-1-i]; str[len-1-i] = temp;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseStr(str);
    printf("Reversed: %s\n", str);
    return 0;
}
