// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;
import java.text.DecimalFormat; 

public class PentArea {

	public static void main(String [] args) {
	
		//create scanner, format obj, and other variables
		Scanner scan = new Scanner(System.in);
		//String pattern = "0.####";
		DecimalFormat formatter = new DecimalFormat("#0.####");
		double r, side, area;

		//prompt
		System.out.print("Enter the length from center to vertex " + 
							"(i.e. r): ");
		r = scan.nextDouble();

		//calculating the area
		side = 2 * r * Math.sin(Math.PI / 5);
		area = (5 * side * side) / (4 * Math.tan(Math.PI / 5));

		//output
		System.out.println("\nBased on the length of " + r + 
							" units from center to vertex,\n" + 
							"the length of the side of pentagon is " + 
							formatter.format(side) + " units,\n" + 
							"and the area of the pentagon is " + formatter.format(area) + 
							" units squared.");

	} // end of main
} // end of class
