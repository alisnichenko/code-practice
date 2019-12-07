/* Author: Oleksandr Lisnichenko
 * this program implements a day care
 * center management system
 * 
 * I implemented the functions
 * add, update, etc.
 * 
 * the aim of this project is to
 * learn how to split a program
 * into multiple files to improve cohesiveness
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "request.h"
#include "readline.h"

#define ROOM_LEN 100
#define NAME_LEN 30
#define PHONE_LEN 15

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
int main(void) {
  char code;

  struct request *wait_list = NULL;
  printf("Operation Code: a for appending to the list, u for updating a book"
	  ", p for printing the list; q for quit.\n");
  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'a': wait_list = append_to_list(wait_list); break;
      case 'u': update(wait_list); break;
      case 'p': printList(wait_list); break;
      case 'q': clearList(wait_list); return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}
