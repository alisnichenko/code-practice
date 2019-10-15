// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;
//import java.lang.Iterable;

public class BabylonSquareRoot {
    
    public static void main(String args[]) {

    	double n;
    	Scanner scan = new Scanner(System.in);

    	System.out.println("This program will calculate the square root of a number  using the Babylonian method.");
    	System.out.println();
    	System.out.print("Enter a positive number: ");
    	while ((n = scan.nextDouble()) <= 0) {
    		System.out.println("Number must be greater that 0.");
    		System.out.print("Re-enter a number: ");
    	}
    	//n = scan.nextDouble();
    	//System.out.println("TEST: " + n);
    	double defGuess = 1; int count = 1;
    	double nextGuess = (defGuess + n / defGuess) / 2, prevGuess = defGuess;
    	while (Math.abs(nextGuess - prevGuess) > 0.00001) {
    		//System.out.println(count + " : ");
    		prevGuess = nextGuess;
    		nextGuess = (prevGuess + n / prevGuess) / 2;
    		count++;
    	}
    	System.out.println("The square root of " + n + " is " + nextGuess);
    } // end of main
} // end of class
