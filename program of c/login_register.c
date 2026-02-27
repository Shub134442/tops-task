#include<stdio.h>
#include<string.h>
int main()
{
    char username[50], password[50];
    char u[50], p[50];
    int found = 0;
    FILE *fp;
    int choice;


    printf("1. Register\n2. Login\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        fp = fopen("users.txt", "a");

        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%s", password);

        fprintf(fp, "%s %s\n", username, password);
        fclose(fp);

        printf("registered\n");
    }

    else if(choice == 2)
    {
        fp = fopen("users.txt", "r");

        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%s", password);

        while(fscanf(fp, "%s %s", u, p) != EOF)
        {
            if(strcmp(username, u) == 0 && strcmp(password, p) == 0)
            {
                found = 1;
                break;
            }
        }

        fclose(fp);

        if(found)
            printf("login successful!\n");
        else
            printf("invalid login!\n");
    }

    return 0;
}
