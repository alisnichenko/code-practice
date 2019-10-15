// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner; 
import java.lang.*;
import java.text.DecimalFormat;
import static java.lang.System.out;

public class GreaterLimit { 

	public static String greaterThanLimit(int[] numbers, int limit) {
		String answer = new String("");
		for (int i = 0; i < numbers.length; i++)
			answer += (numbers[i] > limit) ? (Integer.toString(numbers[i]) + " ") : ""; 
		return answer;
	}

	public static void main(String[] args) { 
		
		//some important instances
		Scanner scan = new Scanner(System.in);
		int n = 10, limit = -1;
		int[] numbers = new int[n];
		
		out.print("Please enter 10 numbers: ");
		for (int i = 0; i < n; i++) { numbers[i] = scan.nextInt(); }
		out.print("Please enter a limit: ");
		limit = scan.nextInt();

		out.println(GreaterLimit.greaterThanLimit(numbers, limit) + "are greater than the limit " + limit);
	} //end of main
} //end of class
