/* Author: Oleksandr Lisnichenko
 * Program for project6 task 1. COP3514.
 *
 * This program takes a file name as input
 * then reads the first letters of each word
 * in a file (assuming that the file starts with a word), 
 * and writes them in the file with the same 
 * name + .dcf extension (0_o)
 */

#include <stdio.h>
#define STRLEN 255

// reads the input into str with n chars
int readline(char *str, int n);
// reads the first letters of words in the file into output
int readFileWords(const char *in, char words[][101], int *n);
// create output file name
void getFileExt(char *in, char *out, char *ext);
// write the encrypted message to out file
int writeFileLetters(const char *out, char *output);
// extracts letters from the array of words
void extract(char words[][101], int n, char *res);

int main(int argc, char *argv[]) {
    int n = STRLEN, errnum;
    // define string first. max 255 chars
    char filenameIn[STRLEN], filenameOut[STRLEN];
    char *extension = ".dcf", output[STRLEN];
    char words[1001][101];
    
    // read the input
    printf("Enter the file name: ");
    n = readline(filenameIn, n);

    // create name for output file
    getFileExt(filenameIn, filenameOut, extension);

    // read words into an array. exit if there is an error
    if ((errnum = readFileWords(filenameIn, words, &n))) {
        printf("Error while reading the file\n");
        return 1;
    }

    // extract letters from words array
    extract(words, n, output);

    // write letter. exit of there is an error
    if ((errnum = writeFileLetters(filenameOut, output))) {
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

// generate new file
void getFileExt(char *in, char *out, char *ext) {
    char *p, *q;
    // append the file name
    for (p = in, q = out; *p != '\0'; p++, q++) { *q = *p; }
    // append the extension... there is probably a better way
    for (p = ext; *p != '\0'; p++, q++) { *q = *p; }
    *q = '\0';
}

// read first letters
int readFileWords(const char *in, char words[][101], int *n) {
    FILE* pFile;
    int wordnum = *n = 0;
    char tempstr[STRLEN], *tempchar;
    pFile = fopen(in, "r");
    // check if there is an error
    if (pFile == NULL) { return 1; }
    // read line by line
    while (fgets(tempstr, STRLEN, pFile) != NULL) {
        int charnum = 0;
	// loop through the line
        for (tempchar = tempstr; *tempchar != '\0'; tempchar++) {
            	// if its not a space nor enter
		if ((*tempchar != ' ') && (*tempchar != '\n')) { 
                words[wordnum][charnum++] = *tempchar; 
            } else {
		// inc the number of words 
                wordnum++; 
                charnum = 0; 
            }
        }
    }
    // number of words
    *n = wordnum;
    // closing the handle
    fclose(pFile);
    return 0;
}

// write string of first letters
int writeFileLetters(const char *out, char *output) {
    FILE* pFile;
    pFile = fopen(out, "w");
    // check if there is an error
    if (pFile == NULL) { return 1; }
    fputs(output, pFile);
    // closing the handle
    fclose(pFile);
    return 0;
}

void extract(char words[][101], int n, char *res) {
    int i;
    // self explanatory
    for (i = 0; i < n; i++)
    { *res++ = words[i][0]; }
    *res = '\0';
}
