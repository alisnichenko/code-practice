/* 
 * Author: Oleksandr Lisnichenko
 * Program for project4 task 2. COP3514.
 *
 * Reads a positive integer and replaces each 
 * digit by adding 6 and taking % 10.
 */

#include <stdio.h>

// function prototypes
void getSize(int *n);
void getArray(int *a, int n);
void encrypt(int *a, int *b, int n);
void swap(int *p, int *q);
void printArray(int *a, int n);

int main() {
    int numDigits = -1;
    // get size
    getSize(&numDigits);
    int num[numDigits], newNum[numDigits];
    getArray(num, numDigits);
    encrypt(num, newNum, numDigits);
    printArray(newNum, numDigits);

	return 0;
} // end of main

// this function encrypts
void encrypt(int *a, int *b, int n) {
    int *p1 = a, *p2 = b;
    for (; p1 < a + n; p1++, p2++) {
        *p2 = (*p1 + 6) % 10;
    }
    swap(b, b + n - 1);
} // end of encrypt

void getSize(int *n) {
    printf("Enter the number of digits of the input number: ");
    scanf("%d", n);
} // end getSize

void getArray(int *a, int n) {
    printf("Enter the number: ");
    int *p = a;
    for (; p < a + n; p++) {
        scanf("%1d", p);
    }
} // end of getArray

void printArray(int *a, int n) {
    printf("Output: ");
    int *p = a;
    for (; p < a + n; p++) {
        printf("%d", *p);
    }
    // making output look better
    printf("\n");
} // end of printArray

void swap(int *p, int *q) {
    // swaping two numbers (pointers)
    // using a temp variable
    int temp = *p;
    *p = *q;
    *q = temp;
} // end of swap
