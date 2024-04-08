/* a C program that generates a random number between 1 and 20 and asks the user to guess it.
Use a while loop to give the user multiple chances until they guess the correct number
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator with the current time
    int targetNumber = rand() % 20 + 1;  // Generate a random number between 1 and 20

    int userGuess;  // Variable to store the user's guess
    int attempts = 0;  // Variable to count the number of attempts

    printf("Guess the number between 1 and 20:\n");


    while (1) {
        printf("Input your guess: ");
        scanf("%d", &userGuess);  // Read the user's guess

        attempts++;  // Increment the number of attempts

        // Check if the guess is correct
        if (userGuess == targetNumber) {
            printf("Congratulations! You guessed the correct number = %d in %d attempts.\n",userGuess ,attempts);
            break;  // Exit the loop if the guess is correct
        } else {
            printf("Incorrect guess. Try again!\n");
        }
    }

    return 0;  // Indicate successful program execution
}
