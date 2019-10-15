/* 
 * Author: Oleksandr Lisnichenko
 * Program for project4 task 1. COP3514.
 *
 * This program reads two arrays, 
 * then determines the number of elements
 * that are different in the given arrays
 * using pointers instead of indexation
 */

#include <stdio.h>

// function prototypes
void getSize(int *n);
void getArray(int *a, int n);
void count_diff(int *a1, int *a2, int n, int *num_diff);

int main() {
    // reading the size of the array
    int num = 0, numDiff = 0;
    getSize(&num);

    // reading the arrays themselves
    int arr1[num], arr2[num];
    printf("Enter the elements of the first array: ");
    getArray(arr1, num);
    printf("Enter the elements of the second array: ");
    getArray(arr2, num);

    //comaring array
    count_diff(arr1, arr2, num, &numDiff);
    printf((numDiff == 0) ? "Output: The arrays are identical\n" : "Output: The arrays are different by %d element(s)\n", numDiff);

	return 0;
} // end of main

// get the array length
void getSize(int *n) {
    printf("Enter the length of the array: ");
    scanf("%d", n);
} // end of getSize

void getArray(int *a, int n) {
    int *p = a;
    for (; p < a + n; p++) {
        scanf("%d", p);
    }
} // end of getArray

void count_diff(int *a1, int *a2, int n, int *num_diff) {
    // moving two pointers along two arrays at the same time
    int *p1 = a1, *p2 = a2;
    for (; p1 < a1 + n; p1++, p2++) {
        // if they are not equal
        if (*p1 != *p2) {
            *num_diff = *num_diff + 1;
        }
    }
} // end of count_diff
