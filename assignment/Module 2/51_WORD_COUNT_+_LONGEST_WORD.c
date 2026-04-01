#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[50], longest[50] = "";
    int wordCount = 0, maxLen = 0, i = 0, j = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else if (j > 0) {
            word[j] = '\0';
            wordCount++;
            if (j > maxLen) { maxLen = j; strcpy(longest, word); }
            j = 0;
        }
        i++;
    }
    if (j > 0) { word[j] = '\0'; wordCount++; if (j > maxLen) strcpy(longest,
word); }

    printf("Word count: %d\n", wordCount);
    printf("Longest word: %s\n", longest);
    return 0;
}
