#include <stdio.h>

int main() {

  int x, y;

  printf("Enter two integers: ");

  scanf("%d %d", &x, &y);

  printf("Add: %d\n", x + y);

  printf("Sub: %d\n", x - y);

  printf("Mul: %d\n", x * y);

  printf("Div: %d\n", x / y);

  printf("Mod: %d\n", x % y);

  printf("x > y: %d\n", x > y);

  printf("x == y: %d\n", x == y);

  printf("x>0 && y>0: %d\n", x > 0 && y > 0);

  printf("x>0 || y>0: %d\n", x > 0 || y > 0);

  return 0;
}
