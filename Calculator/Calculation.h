#ifndef CALCULATION_H
#define CALCULATION_H
 
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "Calculator.h"
#include "../MainMenu/MENU.h"
// Include the header file

// Function to display the menu
void displayMenu()
{
    system("cls");
    displayTime();
    
    printf("\t\t#      ============== CALCULATOR =============    #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t# 1. Addition (+)                                 #\n");
    printf("\t\t# 2. Subtraction (-)                              #\n");
    printf("\t\t# 3. Multiplication (x)                           #\n");
    printf("\t\t# 4. Division (/)                                 #\n");
    printf("\t\t# 5. Square Root (_/^)                            #\n");
    printf("\t\t# 6. Power (^)                                    #\n");
    printf("\t\t# 7. Exit                                         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
}

// Function to print result
void printResult(char *operation, double result)
{
    system("cls");
    displayTime();
    
    printf("\t\t#            ========== Result ==========         #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#               %-15s: %.2f            #\n", operation, result);
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");
}

// Function to handle invalid input
void invalidInput()
{
    printf("\nInvalid Input! Please try again.\n");
}

// Function to read numbers from the user
int readNumbers(double *numbers)
{
    char input[100];
    int count = 0;

    system("cls");
    displayTime();

    printf("\t\t#        ============= Result =============       #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#       Enter numbers separated by spaces:        #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t#                                                 #\n");
    printf("\t\t@#################################################@\n");

    fgets(input, sizeof(input), stdin); // Read the entire line

    // Parse the line to extract numbers
    char *token = strtok(input, " ");
    while (token != NULL)
    {
        numbers[count++] = atof(token); // Convert string to double
        token = strtok(NULL, " ");
    }

    return count;
}

// Function for addition
double addition(double *numbers, int count)
{
    double result = 0;
    for (int i = 0; i < count; i++)
    {
        result += numbers[i];
    }
    return result;
}

// Function for subtraction
double subtraction(double *numbers, int count)
{
    double result = numbers[0];
    for (int i = 1; i < count; i++)
    {
        result -= numbers[i];
    }
    return result;
}

// Function for multiplication
double multiplication(double *numbers, int count)
{
    double result = 1;
    for (int i = 0; i < count; i++)
    {
        result *= numbers[i];
    }
    return result;
}

// Function for division
double division(double *numbers, int count)
{
    double result = numbers[0];
    for (int i = 1; i < count; i++)
    {
        if (numbers[i] == 0)
        {
            system("cls");
            displayTime();
            
            printf("\t\t#         ============ Result ============        #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                       Error!                    #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t@#################################################@\n");

            return NAN; // Return "Not a Number" to indicate error
        }
        result /= numbers[i];
    }
    return result;
}

// Function for square root
double squareRoot(double a)
{
    if (a < 0)
    {
        system("cls");
        displayTime();
        
        printf("\t\t#        ============ Result ============         #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                      Error!                     #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t#                                                 #\n");
        printf("\t\t@#################################################@\n");

        return -1;
    }
    return sqrt(a);
}

// Function for power
double power(double base, double exp)
{
    return pow(base, exp);
}

// Main function
void calculator()
{
    int choice;
    double numbers[100];
    int count;
    char continueCalc;

    while (1)
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline left by scanf

        if (choice == 7)
        { // Exit
            Menu();
            break;
        }

        switch (choice)
        {
        case 1: // Addition
            count = readNumbers(numbers);
            printResult("Addition", addition(numbers, count));
            break;

        case 2: // Subtraction
            count = readNumbers(numbers);
            if (count < 1)
            {
                invalidInput();
            }
            else
            {
                printResult("Subtraction", subtraction(numbers, count));
            }
            break;

        case 3: // Multiplication
            count = readNumbers(numbers);
            printResult("Multiplication", multiplication(numbers, count));
            break;

        case 4: // Division
            count = readNumbers(numbers);
            if (count < 1)
            {
                invalidInput();
            }
            else
            {
                double divResult = division(numbers, count);
                if (!isnan(divResult))
                { // Check if the result is valid
                    printResult("Division", divResult);
                }
            }
            break;

        case 5: // Square Root

            system("cls");
            displayTime();
            
            printf("\t\t#        ============ Result ============         #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                  Enter a number:                #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t@#################################################@\n");

            double num;
            scanf("%lf", &num);
            double sqrtResult = squareRoot(num);
            if (sqrtResult != -1)
            { // Only print result if it's valid
                printResult("Square Root", sqrtResult);
            }
            getchar(); // Clear newline
            break;

        case 6: // Power
            system("cls");
            displayTime();
            
            printf("\t\t#          =========== Result ===========         #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#             Enter base and exponent:            #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t#                                                 #\n");
            printf("\t\t@#################################################@\n");

            double base, exp;
            scanf("%lf %lf", &base, &exp);
            printResult("Power", power(base, exp));
            getchar(); // Clear newline
            break;

        default:
            invalidInput();
        }

        // Ask user if they want to continue
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &continueCalc);
        getchar(); // Clear newline

        if (continueCalc == 'n' || continueCalc == 'N')
        {
            Menu();
            break;
        }
    }

}

#endif
