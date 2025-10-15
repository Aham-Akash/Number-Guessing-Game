#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess;
    srand(time(0)); // seed random number generator
    int n = rand() % 100 + 1; // random number between 1 and 100
    printf("Guess a number between 1 and 100:\n");
    while (1) {
        scanf("%d", &guess);
        if (guess == n) {
            printf("our guess is CORRECT!!!\n");
            break;
        } 
        else if (guess < n) {
            printf("Too low! Try again:\n");
        } 
        else {
            printf("Too high! Try again:\n");
        }
    }
    return 0;
}
