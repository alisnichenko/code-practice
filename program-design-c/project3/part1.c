/*
 * Author: Oleksandr Lisnichenko
 * Program for project3 task 1. COP3514.
 *
 * This program searches for the element
 * in an array and outputs its position.
 */

#include <stdio.h>
#define ARR_MAX 9999

// reading number of elements and the array of ints
void getArray(int *n, int arr[ARR_MAX]) {
    int i;
    printf("Enter the length of the array: ");
    scanf("%d", n);
    // brief validation
    // if (n < 0) { err("Oopsie. Invalid number. Exiting..."); }
    printf("Enter %d elements of the array: ", *n);
    // reading the array of elements
    for (i = 0; i < *n; i++) { scanf("%d", &arr[i]); }
}

void getNumber(int *n) {
    printf("Enter the value for searching: ");
    scanf("%d", n);
}

// finding a position
int findPosition(int arr[ARR_MAX], int n, int num) {
    int i = 0;
    for (i = 0; i < n; i++) {
        // return position if found
        if (arr[i] == num) { return i; }
    }
    return -1;
}

// print the number
void printResult(int n) {
    printf("Output: %d", n);
}

// main
int main() {
    int n, findNum, pos;
    int arr[ARR_MAX];

    // read array 
    getArray(&n, arr);
    // read number
    getNumber(&findNum);
    // find position
    pos = findPosition(arr, n, findNum);
    // print number
    printResult(pos);

	return 0;
}
