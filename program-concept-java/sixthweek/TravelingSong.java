// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;

public class TravelingSong {
	
	public static void main(String[] args) {

		//declaring some of the variables and an object
		//setting n = -1 to enter the input
		//validation loop
		int n = -1;
		Scanner scan = new Scanner(System.in);

		//input validation
		while (n < 0 || n > 100) {
			System.out.print("How many verses (1 to 100)? ");
			n = scan.nextInt();
		} //end of while

		//actual output of the song
		for(int i = 0; i < n; i++) {
			System.out.println("\n" + (100 - i) + " bottles of beer on the wall.\n" + 
				(100 - i) + " bottles of beer.\n" + 
				"If one of those bottles should happen to fall\n" + 
				(100 - (i + 1)) + " bottles of beer on the wall.");
		} //end of for

	} // end of main
} // end of class
