#include <stdio.h>

int main()
{
    int choice, qty;
    char more;
    float total = 0, amount;

    do
    {
        printf("\n------ MENU ------\n");
        printf("1. Pizza  - 180 rs/pcs\n");
        printf("2. Burger - 100 rs/pcs\n");
        printf("3. Dosa   - 120 rs/pcs\n");
        printf("4. Idli   - 50 rs/pcs\n");
        printf("------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch (choice)
        {
            case 1:
                amount = qty * 180;
                printf("You selected Pizza\n");
                break;

            case 2:
                amount = qty * 100;
                printf("You selected Burger\n");
                break;

            case 3:
                amount = qty * 120;
                printf("You selected Dosa\n");
                break;

            case 4:
                amount = qty * 50;
                printf("You selected Idli\n");
                break;

            default:
                printf("Invalid choice!\n");
                amount = 0;
        }

        printf("Amount = %.2f\n", amount);

        total += amount;

        printf("Total Amount so far = %.2f\n", total);

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    printf("\n===== FINAL BILL =====\n");
    printf("Total Amount = %.2f\n", total);
    printf("======================\n");

    return 0;
}
