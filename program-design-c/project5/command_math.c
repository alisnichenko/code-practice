/* Author: Oleksandr Lisnichenko
 * Program for project5 task 1. COP3514.
 *
 * This program takes a string that may
 * contain a range (defined as [a-b], where
 * a and b are the limits of a letter range
 * in alphabetical order of letters) and replaces
 * a range with an appropriate sequence of chars
 */

#include <stdlib.h>
#include <stdio.h>
#define STRLEN 255

// exit with error function
void err(char *message);
float computeCommand(char *operation, int n1, int n2);

int main(int argc, char *argv[]) {
    // getting variables from the command line
    if (argc <= 3) { err("Not enough arguments"); }
    char *operation = argv[1];
    int n1 = atoi(argv[2]), n2 = atoi(argv[3]);
    // calling the function
    float result = computeCommand(operation, n1, n2);
    printf("Result: %0.f\n", result);
    return 0;
} // end of main

float computeCommand(char *operation, int n1, int n2) {
    // result variable
    float result = n1;
    // computing depending on the variable
    if (*operation == '+') { result = n1 + n2; }
    else if (*operation == '-') { result = n1 - n2; }
    else if (*operation == 'x') { result = n1 * n2; }
    else if (*operation == '/' && n2 != 0) { result = (float) n1 / (float) n2; } 
    else { err("Division by zero. You fool"); }
    return result;
}

void err(char *message) {
    puts(message);
    exit(1);
}
