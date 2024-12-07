#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "D:\Capstone\Back_To_90s\MainMenu\MENU.h"
#include "..\Clock\DISPLAYTIME.h"

// Function to display the player's or computer's choice
void displayChoice(int choice)
{
    if (choice == 1)
        printf("\t\t# Rock                                            #\n");
    else if (choice == 2)
        printf("\t\t# Paper                                           #\n");
    else if (choice == 3)
        printf("\t\t# Scissor                                         #\n");
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
    system("cls");
    displayTime();
    
    printf("\t\t#        Welcome to Rock, Paper, Scissors!        #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
    do
    {
        // Game Menu
        system("cls");
        displayTime();
        
        printf("\t\t#               Rock, Paper, Scissors             #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                Choose an option:                #\n");
        printf("\t\t# 1. Rock                                         #\n");
        printf("\t\t# 2. Paper                                        #\n");
        printf("\t\t# 3. Scissors                                     #\n");
        printf("\t\t# Enter your choice (1, 2, or 3):                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

        // Read player's choice
        scanf("%d", &playerChoice);

        // Validate player's choice
        if (playerChoice < 1 || playerChoice > 3)
        {
            system("cls");
            displayTime();
            
            printf("\t\t#         Invalid! Please enter 1, 2, or 3.       #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t@#################################################@\n");
            continue;
        }

        // Generate computer's random choice
        computerChoice = rand() % 3 + 1;

        // Display both choices
        system("cls");
        displayTime();
        printf("\t\t# You chose:                                      #\n");
        displayChoice(playerChoice);
        printf("\t\t#                                                 #\n");
        printf("\t\t# Computer chose:                                 #\n");
        displayChoice(computerChoice);
        printf("\t\t#                                                 #\n");

        // Determine and display the winner
        if (playerChoice == computerChoice)
        {
            printf("\t\t#                  It's a draw!                   #\n");
        }
        else if ((playerChoice == 1 && computerChoice == 3) || // Rock beats Scissors
                 (playerChoice == 2 && computerChoice == 1) || // Paper beats Rock
                 (playerChoice == 3 && computerChoice == 2))   // Scissors beats Paper
        {
            printf("\t\t#                     You win!                    #\n");
        }
        else
        {
            printf("\t\t#                  Computer wins!                 #\n");
        }

        // Ask if the player wants to play again
        printf("\t\t# Do you want to play again? (y/n):               #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');
    
    Menu();

}
#endif 