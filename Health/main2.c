#include "health.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

// Function to display the Health menu
void displayHealthMenu()
{
    printf("\t#        ====================== HEALTH ======================                #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#            1. Calculate BMI                                                #\n");
    printf("\t#                                                                            #\n");
    printf("\t#            2. Exit                                                         #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t#                                                                            #\n");
    printf("\t@############################################################################@\n");
    printf("Enter your choice: ");
}

// Function to calculate BMI and provide a suggestion
// Function to calculate BMI and provide a suggestion
void calculateBMI()
{
    double weight, heightInMeters, feet, inches, bmi;
    char suggestion[50];
    char choice;

    do
    {
        system("cls"); // Clear screen before getting inputs
        printf("\t#        ====================== Result ======================                #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                   Enter your weight (kg):                                  #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t@############################################################################@\n");

        // Input weight
        scanf("%lf", &weight);

        system("cls"); // Clear screen before getting next input
        printf("\t#        ====================== Result ======================                #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#               Enter your height (feet inches):                             #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t@############################################################################@\n");

        // Input height
        scanf("%lf %lf", &feet, &inches);

        // Convert height to meters
        heightInMeters = (feet * 0.3048) + (inches * 0.0254);

        // Calculate BMI
        bmi = weight / (heightInMeters * heightInMeters);

        // Determine the BMI category
        if (bmi < 18.5)
        {
            strcpy(suggestion, "Underweight");
        }
        else if (bmi >= 18.5 && bmi < 24.9)
        {
            strcpy(suggestion, "Normal weight");
        }
        else if (bmi >= 25 && bmi < 29.9)
        {
            strcpy(suggestion, "Overweight");
        }
        else
        {
            strcpy(suggestion, "Obese");
        }

        // Display BMI and suggestion
        system("cls"); // Clear screen before displaying results
        printf("\t#        ====================== Result ======================                #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#          BMI: %-18.2f                                           #\n", bmi);
        printf("\t#                                                                            #\n");
        printf("\t#          %-25s                                         #\n", suggestion);
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t#                                                                            #\n");
        printf("\t@############################################################################@\n");

        // Ask the user if they want to calculate again
        printf("\nDo you want to calculate BMI again? (y/n): ");
        getchar(); // Clear leftover newline
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
        {
            system("cls"); // Clear screen before going back to the menu
        }

    } while (choice == 'y' || choice == 'Y');
}

// Main Health feature logic
void startHealthFeature()
{
    int choice;

    while (1)
    {
        displayHealthMenu();
        scanf("%d", &choice);

        if (choice == 1)
        {
            calculateBMI();
        }
        else if (choice == 2)
        {

            system("cls"); // Clear screen before getting next input
            printf("\t#        ====================== Result ======================                #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                              Goodbye!                                      #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t#                                                                            #\n");
            printf("\t@############################################################################@\n");

            break;
        }
    }
}

// Main function to start the health feature
int main()
{
    startHealthFeature();
    return 0;
}
