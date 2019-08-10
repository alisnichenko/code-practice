// this is my integration
// of both notes and code
// for COP2510 class
// on January the 17

import java.util.Scanner;
//import java.util.Random;
import java.text.NumberFormat;
import java.*.DecimalFormat;

public class ClassroomWork {

	public static void main(String [] args) {
		Scanner scan = new Scanner(System.in);
		//Random rand = new Random();
		NumberFormat fmt2 = NumberFormat.getPercentInstance();
		NumberFormat fmt1 = NumberFormat.getCurrencyInstance();
		DecimalFormat dec1 = new DecimalFormat("0.###");

		final double TAX = 0.06; // 6%
		//int x, y;
		//x = scan.nextInt();
		//y = rand.nextInt();

		int quantity;
		double unitprice;

		System.out.printl

		double subtotal, tax, total;
		subtotal = quantity * unitprice;
		tax = subtotal * TAX;
		total = subtotal + tax;

		System.out.println("Subtotal: " + subtotal);
		System.out.println("Tax: " + tax);
		System.out.println("Total: " + total);

	} // end of main
	
} // end of Classwork class
