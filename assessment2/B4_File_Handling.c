#include <stdio.h>

void saveGoals() {
    FILE *fp = fopen("goals.txt", "w");
    if (fp == NULL) { printf("Error opening file!\n"); return; }

    char *days[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    float goal;
    for (int i = 0; i < 7; i++) {
        printf("Enter study goal for %s (hours): ", days[i]);
        scanf("%f", &goal);
        fprintf(fp, "%s: %.2f hours\n", days[i], goal);
    }
    fclose(fp);
    printf("Goals saved successfully!\n");
}

void readGoals() {
    FILE *fp = fopen("goals.txt", "r");
    if (fp == NULL) { printf("No saved goals found.\n"); return; }

    char line[100];
    printf("\n--- Your Weekly Study Goals ---\n");
    while (fgets(line, sizeof(line), fp))
        printf("%s", line);
    fclose(fp);
}

int main() {
    int choice;
    printf("1. Save Goals\n2. View Goals\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) saveGoals();
    else if (choice == 2) readGoals();
    return 0;
}
