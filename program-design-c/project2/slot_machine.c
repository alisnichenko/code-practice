/*
 * Author: Oleksandr Lisnichenko
 * Program for project2 task 1. COP3514
 *
 * This program simulates the slot machine
 * from the casinos by taking input in cents
 * from the user as the initial balance,
 * then randomizing the three "fruit" and
 * then determining the balance after one
 * playing iteration
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LAST_SYMBOL 13
#define FIRST_SYMBOL 0
#define SPIN_COST 5
#define WIN_COST 100

// function used for exiting the program with a message
void err(char *message) {
	puts(message);
	exit(1);
}

// function that requests and validates input
void getInitialBalance(int *initialBalance) {
	printf("Enter initial balance (in cents): ");
	// if input is invalid for cents
	scanf("%d", initialBalance);
	// exit if invalid
	if (*initialBalance < 0) {
		err("Oopsie, invalid input, your monies have to be no less than zero cents. Exiting...");
	}
}

// adding random sequence of symbols to an array to store randoms
void getRandomSymbols(char *(randomSymbols)[3], const char *symbols[LAST_SYMBOL + 1]) {
	int i = 0, num = 0;	
	for (i = 0; i < 3; i++) {
		num = (rand () % (LAST_SYMBOL - FIRST_SYMBOL)) + 1;
		randomSymbols[i] = (char *)symbols[num];
	}
}

int getWinnings(char *(randomSymbols)[3], int initialBalance) {
	int balance = initialBalance;
	if (randomSymbols[0] == randomSymbols[1] && randomSymbols[1] == randomSymbols[2]) {
		balance += WIN_COST;
		printf("Congratulations! You have won $1\n");
	} else {
		balance -= SPIN_COST;
		printf("Argh. Better luck next time\n");
	}
	return balance;
}

void printBalance(int currentBalance) {
	printf("Remaining balance: %d cent(s)\n\n", currentBalance);
}

void printSlots(char *(randomSymbols)[3]) {
	printf("\n%s %s %s\n", randomSymbols[0], randomSymbols[1], randomSymbols[2]);
}

void getPlay(int *wouldYouLikeToPlay) {
	printf("Would you like to play? (press 1 to play or 0 to quit): ");
	scanf("%d", wouldYouLikeToPlay);
	if (*wouldYouLikeToPlay < 0 || *wouldYouLikeToPlay > 1) {
		err("Oopsie, entered invalid option. Exiting...");
	}
}

void printFinalBalance(int *currentBalance) {
	printf("Thank you for playing! Remaining balance: %d cent(s)\n", *currentBalance);
}

// main
int main() {
	// setting up the seed for rand()
	//srand(time(NULL));
	// basic variables
	int initialBalance = 0;
	int currentBalance = 0;
	int wouldYouLikeToPlay = -1;
	const char *symbols[LAST_SYMBOL + 1] = {
		"Pineapple", 
		"Kiwi",
		"Apple", 
		"Orange",
		"Lime",
		"Peach",
		"Lemon", 
		"Pear",
		"Banana", 
		"Cherry",
		"Grape", 
		"Blueberry",
		"Blackberry", 
		"Apricot"
	};
	
	// getting input
	getInitialBalance(&initialBalance);
	currentBalance = initialBalance;
	// a loop for the game
	getPlay(&wouldYouLikeToPlay);
	while (wouldYouLikeToPlay) {
		initialBalance = currentBalance;
		// if no monies exit the program
		if (initialBalance < 5) {
			err("Oopsie, insufficient funds. Exiting...");
		}
		// array of random symbols
		char *(randomSymbols)[3];
		// get randomized slots
		getRandomSymbols(randomSymbols, symbols);
		// calculate winnings
		printSlots(randomSymbols);
		currentBalance = getWinnings(randomSymbols, initialBalance);
		// display the result
		printBalance(currentBalance);
		// repeat
		getPlay(&wouldYouLikeToPlay);
	}
	// print remaining balance after finishing the game
	printFinalBalance(&currentBalance);
	return 0;
}
