// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;
import java.text.DecimalFormat;

public class TicketVal {

	public static void main(String[] args) {
		
		//declaring variables and objects
		int ticketNumber, newTicket, lastDigit, remainder;
		String stringValid = new String("");
		Scanner scan = new Scanner(System.in);

		//prompt
		System.out.print("Enter 6-digit ticket number: ");

		//evaluation
		ticketNumber = scan.nextInt();
		lastDigit = ticketNumber % 10;
		newTicket = ticketNumber / 10;
		remainder = newTicket % 7;
		stringValid = (lastDigit == remainder) ? "valid" : "invalid";

		//print everything
		System.out.println("The ticket number " + ticketNumber +
						   " is " + stringValid + "\n");
		System.out.println("lastDigit = " + lastDigit);
		System.out.println("remainder = " + remainder);

	}

}
