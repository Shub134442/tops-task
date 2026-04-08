#include <stdio.h>

int main() {
  float hours;
  printf("Enter your daily study hours: ");
  scanf("%f", &hours);

  if (hours >= 8) {
    printf("Amazing! You are a study champion!\n");
  } else if (hours >= 6) {
    printf("Great job! Keep the momentum going!\n");
  } else if (hours >= 4) {
    printf("Good effort! Try to push a little more.\n");
  } else if (hours >= 2) {
    printf("You started! Consistency is key.\n");
  } else {
    printf("Every expert was once a beginner. Start today!\n");
  }
  return 0;
}
