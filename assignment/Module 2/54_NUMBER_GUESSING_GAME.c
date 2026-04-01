#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 7;
    printf("Guess the number (1-100). You have %d attempts.\n", attempts);

    while (attempts > 0) {
        printf("Enter guess: ");
        scanf("%d", &guess);
        attempts--;
        if (guess == secret) { printf("Correct!\n"); return 0; }
        else if (guess < secret) printf("Too low! %d attempts left.\n",
attempts); else                     printf("Too high! %d attempts left.\n",
attempts);
    }
    printf("Game over! The number was %d\n", secret);
    return 0;
}
