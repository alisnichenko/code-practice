/* Author: Oleksandr Lisnichenko
 *
 * This is a separate source file for
 * the readline function. The function reads
 * a line of text using pointers
 */

#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n) {
    int ch, i = 0;

    while (isspace(ch = getchar()))
    ; // that's a weird style
    str[i++] = ch;
    while ((ch = getchar()) != '\n') {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}