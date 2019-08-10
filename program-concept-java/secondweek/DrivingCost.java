// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;

public class DrivingCost {

	public static void main(String [] args) {
	
		// input variables
		double distance_drive, miles_per_gallon, price_per_gallon, cost_of_driving;
		// creating scanner
		Scanner scanner = new Scanner(System.in);

		// reading input
		System.out.print("Enter the driving distance: ");
		distance_drive = scanner.nextDouble();
		System.out.print("Enter miles per gallon: ");
		miles_per_gallon = scanner.nextDouble();
		System.out.print("Enter price per gallon: ");
		price_per_gallon = scanner.nextDouble();

		// calculations and output
		cost_of_driving = distance_drive / miles_per_gallon * price_per_gallon;
		System.out.print("The cost of driving is " + "$" + cost_of_driving);

	} // end of main
} // end of class
