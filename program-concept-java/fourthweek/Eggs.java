// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner;
import java.text.NumberFormat;
import java.util.Currency;

public class Eggs {
	
	public static void main(String [] args) { 
		//initializing constants
		final double price_dozen = 3.25; //$
		final double price_egg = 0.45; //cents
		final int dozen = 12;
		final int amount_eggs;
		int dozens, individual_eggs;
		double cost_dozens, cost_eggs, total_cost;

		//creating scan obj
		Scanner scan = new Scanner(System.in);
		NumberFormat formatter = NumberFormat.getCurrencyInstance();
		Currency currency = Currency.getInstance("USD");
		formatter.setCurrency(currency);

		//prompt/input
		System.out.print("How many eggs would you like to purchase? ");
		amount_eggs = scan.nextInt();
		//feedback
		System.out.println("Number of eggs ordered: " + amount_eggs + "\n");
		
		//other calculations
		dozens = amount_eggs / dozen;
		individual_eggs = amount_eggs % dozen; 
		cost_dozens = price_dozen * dozens;
		cost_eggs = individual_eggs * price_egg;
		total_cost = cost_eggs + cost_dozens;

		//output
		System.out.println("Cost of " + dozens +" dozen eggs (@ " +
							formatter.format(price_dozen) + 
							" per dozen): " + formatter.format(cost_dozens));
		System.out.println("Cost of " + individual_eggs + " individual eggs " +
							"(@ " + formatter.format(price_egg) + " per egg): " +
							formatter.format(cost_eggs));
		System.out.println("Total Cost: " + formatter.format(total_cost));
	} // end of main
} // end of class
