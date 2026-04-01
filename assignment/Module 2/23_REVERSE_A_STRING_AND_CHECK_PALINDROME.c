#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int len, i;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) rev[i] = str[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed: %s\n", rev);
    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}
