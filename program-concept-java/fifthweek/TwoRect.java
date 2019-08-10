// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner;

public class TwoRect {

	public static void main(String[] args) {
		
		//declaring some variables
		double x1, y1, x2, y2, w1, h1, h2, w2;
		Scanner scan = new Scanner(System.in);
		//string with an answer
		String strCheckOverlap = new String("");

		//prompt
		System.out.println("Enter the x and y coordinates for the center of rectangle 2: ");
		x1 = scan.nextDouble();
		y1 = scan.nextDouble();

		System.out.println("Enter the x and y coordinates for the center of rectangle 2: ");
		x2 = scan.nextDouble();
		y2 = scan.nextDouble();	

		System.out.println("Enter the width and height of rectangle 1: ");
		w1 = scan.nextDouble();
		h1 = scan.nextDouble();

		System.out.println("Enter the width and height of rectangle 2: ");
		w2 = scan.nextDouble();
		h2 = scan.nextDouble();		

		//calculations
		//using Math.abs()
		if ((Math.abs(x1 - x2) <= (w1 - w2) / 2) && (Math.abs(y1 - y2) <= (h1 - h2) / 2))
			strCheckOverlap = " is inside ";
		else if((Math.abs(x1 - x2) <= (w1 + w2) / 2) && (Math.abs(y1 - y2) <= (h1 + h2) / 2))
			strCheckOverlap = " overlaps ";
		else
			strCheckOverlap = " does not overlap ";
		
		//response
		System.out.println(); //extra line for a good look
		System.out.println("The center points of rectange 1 are (" +
						    x1 + ", " + y1 + "),");
		System.out.println("its width is " + w1 + " units and");
		System.out.println("its height is " + h1 + " units.\n");

		//System.out.println();

		System.out.println("The center points of rectange 2 are (" +
						    x2 + ", " + y2 + "),");
		System.out.println("its width is " + w2 + " units and");
		System.out.println("its height is " + h2 + " units.");

		//answer
		System.out.println(); //extra line for a good look
		System.out.println("rectangle 2" + strCheckOverlap + "rectangle 1");

	} // end of main
} // end of class
