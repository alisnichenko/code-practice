// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

//import java.util.Scanner

public class Stocks {

	public static void main(String [] args) {
	
		// declaring constant/known variables for ORCL
		// String as_of_date = "Jan 23 1:44PM ET";
		double one_stock_price = 49.10; // 49.10 USD
		// constant
		final double commission = 0.025; // 2.5%
		int purchased_shares = 750; // given

		// calculations themselves
		double total_stock_cost = one_stock_price * purchased_shares;
		double total_commision = commission * total_stock_cost;
		double total_transaction = total_stock_cost + total_commision;

		//output
		System.out.println("The number of shares purchased is: " + 
			purchased_shares);
		System.out.println("The current share price is: " +
			"$" + one_stock_price);
		// since I store percent in a different format
		// I have to multiply by 100 to get %
		System.out.println("The current commission amount is: " +
			(0.025 * 100) + "%");
		
		// empty line between given and calculated
		System.out.println("\n");

		// output
		System.out.println("The stock cost is: $" + total_stock_cost); 
		System.out.println("The commission cost is: $" + total_commision);
		System.out.println("The total amount of the transaction is: $" + total_transaction);

	} // end of main
} // end of class
