#include <stdio.h>
int main() {
    FILE *fp;

    // Write
    fp = fopen("test.txt", "w");
    if (fp == NULL) { printf("Error opening file\n"); return 1; }
    fprintf(fp, "Hello, File Handling in C!\n");
    fclose(fp);

    // Read
    char ch;
    fp = fopen("test.txt", "r");
    if (fp == NULL) { printf("Error opening file\n"); return 1; }
    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);

    return 0;
}
