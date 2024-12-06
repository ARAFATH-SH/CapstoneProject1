#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the player's or computer's choice
void displayChoice(int choice)
{
    if (choice == 1)
        printf("Rock");
    else if (choice == 2)
        printf("Paper");
    else if (choice == 3)
        printf("Scissors");
}

// Function to format and print text within a boxed frame
void printInBox(const char *text)
{
    printf("\t# %-57s #\n", text);
}

// Main game logic
void games()
{
    int playerChoice, computerChoice;
    char playAgain;

    // Seed random number generator
    srand(time(0));

    // Welcome Message
    printf("\t#############################################################\n");
    printInBox("Welcome to Rock, Paper, Scissors!");
    printf("\t#############################################################\n");

    do
    {
        // Game Menu
        printf("\t#############################################################\n");
        printInBox("");
        printInBox("Rock, Paper, Scissors");
        printInBox("");
        printInBox("Choose an option:");
        printInBox("1. Rock");
        printInBox("2. Paper");
        printInBox("3. Scissors");
        printInBox("");
        printInBox("Enter your choice (1, 2, or 3):");
        printInBox("");
        printf("\t#############################################################\n");

        // Read player's choice
        scanf("%d", &playerChoice);

        // Validate player's choice
        if (playerChoice < 1 || playerChoice > 3)
        {
            printf("\t#############################################################\n");
            printInBox("Invalid choice! Please enter 1, 2, or 3.");
            printf("\t#############################################################\n");
            continue;
        }

        // Generate computer's random choice
        computerChoice = rand() % 3 + 1;

        // Display both choices
        printf("\t#############################################################\n");
        printf("\t# You chose: ");
        displayChoice(playerChoice);
        printf("                                           #\n");
        printf("\t# Computer chose: ");
        displayChoice(computerChoice);
        printf("                                      #\n");
        printf("\t#############################################################\n");

        // Determine and display the winner
        if (playerChoice == computerChoice)
        {
            printf("\t#############################################################\n");
            printInBox("It's a draw!");
            printf("\t#############################################################\n");
        }
        else if ((playerChoice == 1 && computerChoice == 3) || // Rock beats Scissors
                 (playerChoice == 2 && computerChoice == 1) || // Paper beats Rock
                 (playerChoice == 3 && computerChoice == 2))   // Scissors beats Paper
        {
            printf("\t#############################################################\n");
            printInBox("You win!");
            printf("\t#############################################################\n");
        }
        else
        {
            printf("\t#############################################################\n");
            printInBox("Computer wins!");
            printf("\t#############################################################\n");
        }

        // Ask if the player wants to play again
        printf("\t#############################################################\n");
        printInBox("Do you want to play again? (y/n): ");
        printf("\t#############################################################\n");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    // Goodbye message
    printf("\t#############################################################\n");
    printInBox("Thanks for playing! Goodbye!");
    printf("\t#############################################################\n");
}

int main()
{
    games();
    return 0;
}
