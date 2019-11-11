/* Author: Oleksandr Lisnichenko
 * Program for project6 task 1. COP3514.
 *
 * This program reads all the products into the
 * struct, sorts them, and then outputs top 5
 * products in a different file called top5.txt
 * 
 * I will be using Radix sort just because I can.
 */

#include <stdio.h>
#define MAX_PROD_CHAR 100
#define MAX_STR_LEN 256
#define MAX_PRODS 100


struct product {
    char name[MAX_PROD_CHAR + 1];
    double price, quantity;
};

// reads the input into str with n chars
int readline(char *str, int n);
// reads the products into the array of type product
int readFileProducts(char *filenameIn, struct product *list, int *n);
// write top 5 products
int writeFileTopProducts(char *filenameOut, struct product *list, int *n);
// sort products using quick sort
void sort_products(struct product *list, int begin, int end);
// helper function to find max product
void findMaxPrice(struct product *list, int n);
// helper function to swap products
void swapProducts(struct product *p1, struct product *p2);

int main(int argc, char *argv[]) {
    // some definitions along with error var
    int n = MAX_STR_LEN, errnum;
    char filenameIn[MAX_STR_LEN];
    char *filenameOut = "top5.txt";
    struct product list[MAX_PRODS];
    
    // read the input
    printf("Enter the file name: ");
    n = readline(filenameIn, n);

    
    // read words into an array. exit if there is an error
    if ((errnum = readFileProducts(filenameIn, list, &n))) {
        printf("Error while reading the file\n");
        return 1;
    }

    // sort using quick sort
    sort_products(list, 0, n);

    // write letter. exit of there is an error
    if ((errnum = writeFileTopProducts(filenameOut, list, &n))) {
       printf("Error while writing to the file\n");
       return 1;
    }

    // print out file name
    printf("Output file name: %s\n", filenameOut);

    return 0;
} // end of main

// read a line of input using pointers
int readline(char *str, int n) {
    int ch, i = 0;
    // while the getchar is not enter
    while ((ch = getchar()) != '\n') 
    { if (i++ < n) { *str++ = ch; } }
    // append the null character
    *str = '\0';
    return i;
}

// read first letters
int readFileProducts(char *filenameIn, struct product *list, int *n) {
    FILE* fptr; int numProducts = 0;
    fptr = fopen(filenameIn, "r");
    // check if there is an error
    if (fptr == NULL) { return 1; }
    // read line by line
    // while read functions read 3 elements
    while (fscanf(fptr, "%s %lf %lf", list->name, &list->price, &list->quantity) == 3) {
        // printf("%s %lf %lf\n", list->name, list->price, list->quantity);
        // increase number of products
        numProducts++;
        // go to the next one
        list++;
    }
    // closing the handle
    fclose(fptr);
    *n = numProducts;
    return 0;
}

// write string of first letters
int writeFileTopProducts(char *filenameOut, struct product *list, int *n) {
    FILE* fptr;
    fptr = fopen(filenameOut, "w");
    // check if there is an error
    if (fptr == NULL) { return 1; }
    // writing to file top 5
    int i; for (i = 0; i < 5; i++) {
        fprintf(fptr, "%-25s %-10.2f %-10.2f\n", list->name, list->price, list->quantity);
        list++; // going to next element
    }
    // closing the handle
    fclose(fptr);
    return 0;
}

// sort products by price in ascending order using quick sort
void sort_products(struct product *list, int begin, int end) {
    int right, left, pivot;
    if (begin < end) {
        // getting the middle and avoiding type overflow
        pivot = (end - begin) / 2 + begin;
        left = begin; right = end;
        while (right >= left)
        {
            // iterating while the order holds
            while ((left <= end) && (list[left].quantity > list[pivot].quantity)) { left++; }
            while ((right >= begin) && (list[right].quantity <= list[pivot].quantity)) { right--; }
            if (left < right) { swapProducts(&list[right], &list[left]); }
        }
        swapProducts(&list[left], &list[pivot]);
        // recursively sort the lesser list
        sort_products(list, begin, left - 1);
        sort_products(list, left + 1, end);
    }
}

// swaping products
void swapProducts(struct product *p1, struct product *p2) {
    struct product temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
