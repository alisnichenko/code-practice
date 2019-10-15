// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner; 
import java.lang.*;
import java.text.DecimalFormat;

public class SequenceMenu { 

	enum Options { 
		Triangular, 
		Tetrahedral, 
		Lazy, 
		Fibonacci
	};

	public static void menu() {
		System.out.println("Hello! This program will help you\nexplore different number sequences.\n");
		System.out.println("Here are your options:\n");

		int i = 1;
		for (Options option : Options.values()) {
			System.out.println(i + ": " + option);
			i++;
		}
		System.out.println();
	}

	public static Options selected(int value) {
		Options selection = null;
		switch(value) {
			case 1:
				System.out.println("You have selected " + Options.Triangular);
				selection = Options.Triangular;
				break;
			case 2:
				System.out.println("You have selected " + Options.Tetrahedral);
				selection = Options.Tetrahedral;
				
				break;
			case 3:
				System.out.println("You have selected " + Options.Lazy);
				selection = Options.Lazy;
				break;
			case 4:
				System.out.println("You have selected " + Options.Fibonacci);
				selection = Options.Fibonacci;
				break;
		}

		return selection;
	}

	public static void triangular(int numberOfValues) {
		System.out.println("The first " + numberOfValues + " of the " + Options.Triangular + " are:");

		for (int i = 1; i <= numberOfValues; i++) {
			int generatedValue = (i * (i + 1)) / 2;
			System.out.print(generatedValue + " ");
		}

		System.out.println();
	}

	public static void tetrahedral(int numberOfValues) {
		System.out.println("The first " + numberOfValues + " of the " + Options.Tetrahedral + " are:");

		int generatedValue = -1;

		for (int i = 1; i <= numberOfValues; i++) {
			generatedValue = (i * (i + 1) * (i + 2)) / 6;
			System.out.print(generatedValue + " ");
		}

		System.out.println();
	}

	public static void lazy(int numberOfValues) {
		System.out.println("The first " + numberOfValues + " of the " + Options.Lazy+ " are:");

		for (int i = 0; i <= numberOfValues; i++) {
			int generatedValue = (i * i + i + 2) / 2;
			System.out.print(generatedValue + " ");
		}

		System.out.println();
	}

	public static void fibonacci(int numberOfValues) {
		int f1 = 0;
		int f2 = 1;

		System.out.println("The first " + numberOfValues + " of the " + Options.Fibonacci + " are:");

		for (int i = 0; i < numberOfValues; i++) {
			System.out.print(f1 + " " );
			int temp = f2;
			f2 = f1 + f2;
			f1 = temp;
		}

		System.out.println();
	}

	public static void generateSequence(Options selection, int numberOfValues) {
		switch(selection) {
			case Triangular:
				triangular(numberOfValues);
				break;
			case Tetrahedral:
				tetrahedral(numberOfValues);
				break;
			case Lazy:
				lazy(numberOfValues);
				break;
			case Fibonacci:
				fibonacci(numberOfValues);
				break;
		}
	}

	public static void main(String[] args) { 
		
		//some important instances
		String answer = "yes";

		while(answer.equalsIgnoreCase("yes")) {
		
		Scanner scan = new Scanner(System.in);

			//displaying the given choices
		menu();

		//input
		System.out.print("Enter one of the choices (1 - 4): ");
		int value = scan.nextInt();
		
		//input validation
		while (value > 4 || value < 1) {
			System.out.print("That is an invalid selection.\nRe-enter your choice: ");
			value = scan.nextInt();
		}
		
		Options selection = selected(value);

		System.out.println();

		System.out.print("Enter the number of values you'd like to see (>1): ");
		int numberOfValues = scan.nextInt();



		while (numberOfValues < 1) {
			System.out.print("That is an invalid selection.\nRe-enter number of values: ");
			numberOfValues = scan.nextInt();
		}
		
		System.out.println();
		
			
		generateSequence(selection, numberOfValues);

		System.out.print("\nWould you like to run the program again?\nType yes or no: ");
		answer = scan.next();
		}
		
	} //end of main
} //end of class
