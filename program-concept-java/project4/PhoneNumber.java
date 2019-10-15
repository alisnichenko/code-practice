// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Random;

public class PhoneNumber {

	enum Flavor {chocolate, vanilla, B}
	
	public static void main(String [] args) {
		int a = 9;

		if (a<7)
			a -=7;
		else if (a>7)
			a+=7;
		else
			a*=2;
		System.out.println(a);
	} // end of main
} // end of class
