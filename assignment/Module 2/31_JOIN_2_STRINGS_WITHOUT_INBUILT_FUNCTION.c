#include <stdio.h>

void joinStrings(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0') i++;
    int j = 0;
    while (s2[j] != '\0') { s1[i] = s2[j]; i++; j++; }
    s1[i] = '\0';
}

int main() {
    char s1[100], s2[50];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    joinStrings(s1, s2);
    printf("Joined: %s\n", s1);
    return 0;
}
