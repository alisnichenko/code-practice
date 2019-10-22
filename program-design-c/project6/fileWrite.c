/* lecture notes
 * about file I/O
 * I wasn't really listening :/
 */

#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main(int argc, char **argv) {
    char str[MAX_LEN + 1];
    FILE* pFile;
    char *planets[] = {"Mercury", "Earth"};
    // what is the difference
    // char **planets1 = {"Mercury", "Earth"};
    
    // getting a file handle
    pFile = fopen("planets.txt". "w");
    if (pFile == NULL) {
        printf("Error opening the file\n");
        return 1;
    }

    int i;
    for (i = 0; i < 2; i++) {
        fputs(planets[i], pFile);
        fputs("\n", pFile);
    }

    fclose(pFile);
    printf("File planets.txt has been written\n");

    return 0;
}