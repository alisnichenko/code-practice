/*
 * Author: Oleksandr Lisnichenko
 * Program for project2 task 2. COP3514
 *
 * This program takes a sequence of characters
 * ending with \n from stdin and then 
 * prints integers that this sequence contains
 */

#include <stdio.h>

// function that does the extraction
void printDigitsFromInput() {
    printf("Input: ");
    // flag variable
    int flag = 1;
    while (flag) {
        char ch = getchar();
        // if its between 0 and 9 in ascii/unicode table
        if (ch != '\n') { 
            if (ch >= '0' && ch <= '9') { 
                printf("%c", ch); 
            } 
        } else {
            // exit the loop 
            flag = 0; 
            // print numbers
            printf(" <- these are numbers extracted\n");
        }
    }
}   

// main
int main() {
    // extract and print
    printDigitsFromInput();
	return 0;
}
