/* Author: Oleksandr Lisnichenko
 * Program for project5 task 1. COP3514.
 *
 * This program takes a string that may
 * contain a range (defined as [a-b], where
 * a and b are the limits of a letter range
 * in alphabetical order of letters) and replaces
 * a range with an appropriate sequence of chars
 */

#include <stdio.h>
#define STRLEN 255

// reads the input into str
int readline(char *str, int n);
// replaces the range and writes to s2
int replace(char *s1, char *s2);

int main(int argc, char *argv[]) {
    int n = STRLEN, flag = 0;
    // define strings first
    char str1[STRLEN], str2[STRLEN];
    printf("Enter the input: ");
    // read the input
    n = readline(str1, n);
    // replace
    flag = replace(str1, str2);
    // if found the range
    if (flag) { printf("Output: %s\n", str2); }
    else { printf("Output: There is no range in the input\n"); }
    
    return 0;
} // end of main

int readline(char *str, int n) {
    int ch, i = 0;
    // white the getchar is not enter
    while ((ch = getchar()) != '\n') {
        if (i++ < n) { *str++ = ch; }
    }
    // append the null character
    *str = '\0';
    return i;
}

int replace(char *s1, char *s2) {
    // flag for the presence of the range
    int flag = 0;
    char *p = s1, a, b;
    while(*p != '\0') {
        if (*p == '[') {
            // found range;
            flag = 1;
            // assign respective limits of the range
            a = *(p + 1); b = *(p + 3);
            // replace with letters
            for (; a <= b; a++) { *s2++ = a; }
            // skip the range
            p += 5;
        } else {
            *s2++ = *p++;
        }
    }
    *s2 = '\0';
    return flag;
}
