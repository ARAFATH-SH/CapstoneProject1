#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Calculation.h"

// Function to display the menu
void displayMenu();

// Function to print result
void printResult(char* operation, double result);

// Function to handle invalid input
void invalidInput();

// Function to read numbers from the user
int readNumbers(double* numbers);

// Function for addition
double addition(double* numbers, int count);

// Function for subtraction
double subtraction(double* numbers, int count);

// Function for multiplication
double multiplication(double* numbers, int count);

// Function for division
double division(double* numbers, int count);

// Function for square root
double squareRoot(double a);

// Function for power
double power(double base, double exp);

#endif // CALCULATOR_H
