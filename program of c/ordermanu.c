#include <stdio.h>
#include <conio.h>
int main() {

    int choice;
    int totalbill = 0;
    int pizzaprice = 250;
    int coffeeprice = 120;
    int burgerprice = 150;
    int teaprice = 30;

    printf("select item 1 for yes 0 for no\n1");
    printf("Pizza(250)? : ");
    scanf("%d", &choice);
    totalbill += (pizzaprice * choice); 

    printf("Coffee(120)? : ");
    scanf("%d", &choice);
    totalbill += (coffeeprice * choice);

    printf("Burger(150)? : ");
    scanf("%d", &choice);
    totalbill += (burgerprice * choice);

    printf("Tea(30)? : ");
    scanf("%d", &choice);
    totalbill += (teaprice * choice);
    
    printf("TOTAL AMOUNT : %d\n", totalbill);
  
    return 0;
}