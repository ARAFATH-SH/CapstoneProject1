#ifndef HEALTH_FEATURE_H
#define HEALTH_FEATURE_H

#include "health.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "Health.h"
#include "../Clock/DISPLAYTIME.h"

// Function to display the Health menu
void displayHealthMenu()
{   
    displayTime();
    
    printf("\t\t#        =========== HEALTH ===========           #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# 1. Calculate BMI                                #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# 2. Exit                                         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
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
        displayTime();
        printf("\t\t#        =========== HEALTH ===========           #\n");
        printf("\t\t#        ============= Result ===========         #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#               Enter your weight (kg):           #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

        // Input weight
        scanf("%lf", &weight);

        system("cls"); // Clear screen before getting next input
        displayTime();
        
        printf("\t\t#        ============ Result ==========           #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#           Enter your height (feet inches):      #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

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
        displayTime();
        
        printf("\t\t#        ============== Result =============      #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#          BMI: %-18.2f                        #\n", bmi);
        printf("\t\t#                                                 #\n");
        printf("\t\t#          %-25s                               #\n", suggestion);
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

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
        system("cls");
        displayHealthMenu();
        scanf("%d", &choice);

        if (choice == 1)
        {
            calculateBMI();
        }
        else if (choice == 2)
        {

            Menu();

            break;
        }
    }
}

// Main function to start the health feature
void health()
{
    startHealthFeature();
}


#endif