/*
Name:Immaculate Nyambura Maingi
Reg No:CT101/G/26509/25
Date:1/10/2025
Description:A program that concerns guessing of numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_Number, guess, attempts = 0;

    srand(time(0));

    // Give a random number between 1 and 20
        secret_Number=rand()%20+1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess>secret_Number) {
            printf("Too high!\n");
        } else if (guess<secret_Number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Took %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
