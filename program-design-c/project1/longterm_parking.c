/* Author: Oleksandr Lisnichenko.
 * For project 1 task 1. COP3514 class.
 *
 * This program takes input from a user
 * in the form of hours and minutes, then validates them.
 * The result of the program is the amount due for the entered
 * parking period. The costs were specified by a task
 */

#include <stdio.h>

#define MINUTES_DAY 1440
#define MINUTES_HOUR 60
#define COST_PER_80 4
#define COST_PER_20 2
#define COST_MAX_DAY 18

// prompt, receive and validate input for hours from a user
int getMinutes() {
	int minutes = 0;
	printf("Enter minutes parked: ");
	// getting input
	// if number of input numbers is not 1 and input is less than zero
 	if (scanf("%d", &minutes) != 1 || minutes < 0 || minutes > 60)
	{ minutes = -1; }
	return minutes;
}

// prompt, receive and validate user input for minutes
int getHours() {
	int hours = 0;
	printf("Enter hours parked: ");
	// getting input
	// if number of input numbers is not 1 and input is less than zero
	if (scanf("%d", &hours) != 1 || hours < 0)
	{ hours = -1; }
	
	return hours;
}

// calculate amount due with given hours and minutes
// costs were specified by a task
int calculateAmountDue(int hours, int minutes) {
	// overall amount for the period entered
	int amount = 0;
	// amount for the current day. 18$ max
	int amountCurrent = 0;
	// calculating the amount of minutes for period entered
	int minutesOverall = hours * MINUTES_HOUR + minutes;
	// getting the number of days for the period
	int days = minutesOverall / MINUTES_DAY;
	// minutes left for further calculations
	int minutesLeft = minutesOverall % MINUTES_DAY;

	// adding the cost of days
	amount += days * 18;

	// if it's the first hour
	if (minutesOverall <= 60) {
		amount = 0;
	} else if (days == 0) {
		// if it's 61-80 minutes
		amount += COST_PER_80;
		amountCurrent += COST_PER_80;
		// substract those 80 minutes
		minutesLeft = minutesOverall - 80;
		// adding additional cost for every 20 minutes
		int i;
		for (i = 0; i < minutesLeft; i += 20) {
			if (amountCurrent < COST_MAX_DAY) {
				amount += COST_PER_20;
				amountCurrent += COST_PER_20;
			}
		}	
	} else {
		// refer to above comments
		int i;
		for (i = 0; i < minutesLeft; i += 20) {
			if (amountCurrent < COST_MAX_DAY) {
				amount += COST_PER_20;
				amountCurrent += COST_PER_20;
			}	
		}
	}
	return amount;
}

int main() {
	// getting hours from user in a separate function
	int hours = getHours();
	// if input is invalid
	if (hours == -1) {
		printf("\nOopsie. Invalid hours. Try again later.\n");
		return 0;
	}
	// getting minutes from user in a separate function
	int minutes = getMinutes();	
	// if input is invalid
	if (minutes == -1) {
		printf("\nOopsie. Invalid minutes. Try again later.\n");
		return 0;
	}
	// calculating amount
	int amount = calculateAmountDue(hours, minutes);

	//printing the amount with formatting
	printf("Amount due ($): %d$\n", amount);
	//exiting main()
	return 0;
}
