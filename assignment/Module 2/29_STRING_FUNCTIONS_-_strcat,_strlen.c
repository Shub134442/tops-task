#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[50];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    strcat(s1, s2);
    printf("Concatenated: %s\n", s1);
    printf("Length: %lu\n", strlen(s1));
    return 0;
}
