/* Author: Oleksandr Lisnichenko
 * Program for project3 task 1. COP3514.
 *
 * This program deletes all instances of
 * an integer value in an array of ints
 */

#include <stdio.h>
#define ARR_MAX 9999

// reading number of elements and the array of ints
void getArray(int *n, int arr[]) {
    int i;
    printf("Enter the length of the array: ");
    scanf("%d", n);
    printf("Enter %d elements of the array: ", *n);
    // reading the array of elements
    for (i = 0; i < *n; i++) { scanf("%d", &arr[i]); }
}

// reads the value for the user
void getNumber(int *n) {
    printf("Enter the value for deleting: ");
    scanf("%d", n);
}

// returns the position of the element in an array 
int findPosition(int arr[], int *numArr, int n) {
    int i = 0;
    for (; i < *numArr; i++) {
        if (arr[i] == n) {
            return i;
        }
    }
    return -1;
}

// this function removed an element and modifies the length
void deleteElements(int arr[], int *numArr, int pos) {
    int i = pos;
    for (; i < *numArr - 1; i++) {
        // assign the value of the next element instead of current element
        arr[i] = arr[i + 1];
    }
    // modify the length of the array
    *numArr -= 1;
}

// this function prints the array
void printResultArray(int arr[], int numArr) {
    printf("Output array: ");
    int i = 0;
    for (i = 0; i < numArr; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// main
int main() {
    int numArr, findNum, pos;
    int arr[ARR_MAX];
    // read array
    getArray(&numArr, arr);
    getNumber(&findNum);

    // while position is found
    while ((pos = findPosition(arr, &numArr, findNum)) != -1) {
        // delete one element
        deleteElements(arr, &numArr, pos);
    }
    // printing the resultant array w/ modified length
    printResultArray(arr, numArr);

 return 0;
}