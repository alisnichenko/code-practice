/* Author: Oleksandr Lisnichenko.
 * For project 1 task 2. COP3514 class.
 *
 * The program receives day of the week and the number of days the work is due
 * and then displays the corrected value for the work to be done and the day due
 */

#include <stdio.h>

#define DAYS_WEEK 7

// receives and validates user input for the current day of the week
int getToday() {
	int day = -1;
	printf("Enter today's day of the week: ");
	scanf("%d", &day);
	// if the day is out of range
	if (day > 6 || day < 0) {
		printf("\nOopsie. Invalid day of the week. Exiting the program. Should be between 0 and 6.\n"); 
		return -1;
	} 
	return day;
}

// receives and validates user input for number of days due deadline
int getNumberDays() {
	int days = -1;
	printf("Enter the number of days for doing the work: ");
	scanf("%d", &days);
	// if days is negative, which is invalid
	if (days < 0) {
		printf("\nOopsie. Invalid number of days. Exiting the program. Should be greater than zero\n"); 
		return -1;
	} 
	return days;
}

// calculates the number of days due the deadline
void calculateDaysDue(int today, int numberDays, int* dayDue, int* daysDue) {
	// getting the due day by using mod division
	*dayDue = (today + numberDays) % DAYS_WEEK;
	*daysDue = numberDays;
	int dayTemp = *dayDue;
	// if it's Friday
	if (*dayDue == 5) {
		*dayDue = 1;
		*daysDue += 3;
	// if it's Saturday
	} else if (*dayDue == 6) {
	       	*dayDue = 1;
		*daysDue += 2;
	// if it's Sunday
	} else if (*dayDue == 0) {
		*dayDue = 1;
		*daysDue += 1;
	}
}

// this function prints the output with formatting
void printResult(const char* day, int numberDays) {
	printf("The due date is %s. The number of days until due date is %d.\n", day, numberDays);
}

int main() {
	// storing the days of the week in an array
	const char *weekdays[DAYS_WEEK] = {
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday"
	};
	
	// initializing variables
	int dayDue, daysDue = -1;
	int today = getToday();
	// if invalid input
	if (today == -1)
	{ return 0; }
	// getting input
	int numberDays = getNumberDays();
	// if invalid input
	if (numberDays == -1)
	{ return 0; }
	
	// get calculations
	calculateDaysDue(today, numberDays, &dayDue, &daysDue);
	//print result with formatting
	printResult(weekdays[dayDue], daysDue);
	
	return 0;
}
