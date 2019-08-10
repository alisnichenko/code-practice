// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;

public class SecondsConv {

	public static void main(String [] args) {
	
		// declaring variables
		int inp_seconds, hours, minutes, seconds;
		// constants
		final int seconds_in_hour = 3600, seconds_in_minute = 60;

		// creating scanner
		Scanner scanner = new Scanner(System.in);

		// reading input
		System.out.print("Enter the number of seconds: ");
		inp_seconds = scanner.nextInt();
		//System.out.println("\n");

		// calculations
		hours = inp_seconds / seconds_in_hour;
		minutes = (inp_seconds % seconds_in_hour) / seconds_in_minute;
		seconds = ((inp_seconds % seconds_in_hour) % seconds_in_minute);

		//output
		System.out.println("Hours: " + hours + "\n" +
			"Minutes: " + minutes + "\n" + 
			"Seconds: " + seconds);

	} // end of main
} // end of class
