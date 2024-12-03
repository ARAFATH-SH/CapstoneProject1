#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoice(int choice) {
    if (choice == 1)
        printf("Rock");
    else if (choice == 2)
        printf("Paper");
    else if (choice == 3)
        printf("Scissors");
}

int main() {
    int playerChoice, computerChoice;
    char playAgain;

    // Seed random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");

    do {
        // Display choices
        printf("\nChoose an option:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice (1, 2, or 3): ");
        scanf("%d", &playerChoice);

        // Validate player choice
        if (playerChoice < 1 || playerChoice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue;
        }

        // Generate computer choice
        computerChoice = rand() % 3 + 1;

        // Display choices
        printf("You chose: ");
        displayChoice(playerChoice);
        printf("\nComputer chose: ");
        displayChoice(computerChoice);
        printf("\n");

        // Determine winner
        if (playerChoice == computerChoice) {
            printf("It's a draw!\n");
        } else if ((playerChoice == 1 && computerChoice == 3) || // Rock beats Scissors
                   (playerChoice == 2 && computerChoice == 1) || // Paper beats Rock
                   (playerChoice == 3 && computerChoice == 2)) { // Scissors beats Paper
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        // Ask if the player wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! Goodbye!\n");

    return 0;
}
