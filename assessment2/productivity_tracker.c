#include <stdio.h>

#define FILE_NAME "study_log.txt"

void logHours() {
    FILE *fp = fopen(FILE_NAME, "a");
    if (!fp) { printf("Error opening file!\n"); return; }
    char day[20];
    float hours;
    printf("Enter day name : ");
    scanf("%s", day);
    printf("Enter study hours: ");
    scanf("%f", &hours);
    fprintf(fp, "%s %.2f\n", day, hours);
    fclose(fp);
    printf("Logged successfully!\n");
}

void weeklyReport() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) { printf("No data found. Please log hours first.\n"); return; }
    char day[20];
    float hours, total = 0;
    int count = 0;
    printf("\n========= WEEKLY REPORT =========\n");
    while (fscanf(fp, "%s %f", day, &hours) == 2) {
        printf("%-12s: %.2f hrs\n", day, hours);
        total += hours;
        count++;
    }
    fclose(fp);
    if (count == 0) { printf("No records found.\n"); return; }
    float avg = total / count;
    printf("---------------------------------\n");
    printf("Total Hours : %.2f\n", total);
    printf("Average/Day : %.2f\n", avg);
    if (avg >= 6)      printf("Performance : EXCELLENT\n");
    else if (avg >= 4) printf("Performance : GOOD\n");
    else               printf("Performance : NEEDS IMPROVEMENT\n");
    printf("=================================\n");
}

void clearData() {
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp) { fclose(fp); printf("Data cleared.\n"); }
}

int main() {
    int choice;
    do {
        printf("\n=== Student Productivity Tracker ===\n");
        printf("1. Log Daily Study Hours\n");
        printf("2. Generate Weekly Report\n");
        printf("3. Clear All Data\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: logHours();    break;
            case 2: weeklyReport(); break;
            case 3: clearData();   break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}
