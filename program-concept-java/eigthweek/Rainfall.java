// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner; 
import java.lang.*;
import java.text.DecimalFormat;
public class Rainfall { 

	public static void main(String[] args) { 
		
		//some important instances
		Scanner scan = new Scanner(System.in);
		String pattern = "#0.##";
		DecimalFormat fmt = new DecimalFormat(pattern);

		//constant for number of months
		int numberOfMonths = 12;
		String months[] = {
			"January", "February", "March", "April",
			"May", "June", "July", "August",
			"September", "October", "November", "December"
		};
		double[] rainfallByMonths = new double[numberOfMonths - 1];
		double 	totalForTheYear = 0, averageForTheYear = 0,
				largestForTheYear = -1, smallestForTheYear = 9999;
		//declaring variables for relevant indexes
		int largestMonthIndex = -1, smallestMonthIndex = -1;
		//beginning of the loop		
		for (int i = 0; i < numberOfMonths; i++) {
			
			System.out.print("Enter the rainfall (in inches) for " + months[i] + ": ");
			double value = scan.nextDouble();

			//input validation
			if (value < 0) { 
				System.out.println("Values must be 0 or more.");
				i--;
				continue; 
			} else { 
				totalForTheYear += value;
				//determining max and min
				if (value >= largestForTheYear) {
					largestForTheYear = value;
					largestMonthIndex = i;
				}
				if (value <= smallestForTheYear) {
					smallestForTheYear = value;
					smallestMonthIndex = i;
				}
			}
		} //end of for loop

		//calculating average
		averageForTheYear = totalForTheYear / (double)numberOfMonths;

		System.out.println();
		System.out.println("The total rainfall for the year is " + fmt.format(totalForTheYear) + " inches.");
		System.out.println("The average rainfall for the year is " + fmt.format(averageForTheYear) + " inches.");
		System.out.println("The largest amount of rainfall for the year is " +
						 	largestForTheYear + " inches in " + months[largestMonthIndex]);
		System.out.println("The smallest amount of rainfall for the year is " + 
							smallestForTheYear + " inches in " + months[smallestMonthIndex]);

	} //end of main
} //end of class
