//********************************************************************//

/*PalindromeTester.java       
Author: Lewis/Loftus*/

//Demonstrates the use of nested while loops.

//******************************************************************** 

// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Scanner; 
import java.lang.*;
public class PalindromeMod { 

//-----------------------------------------------------------------
//  Tests strings to see if they are palindromes. 
//----------------------------------------------------------------- 

	public static String charCheck (String str) {
		String var = "";

		for (int i = 0; i < str.length(); i++) {
			if (Character.isLetterOrDigit(str.charAt(i)))
				var = var + str.charAt(i);
		}
		return var;
	}

	public static void main(String[] args) { 

		String str, another = "y"; 
		int left, right; 
		Scanner scan = new Scanner(System.in); 

		while (another.equalsIgnoreCase("y"))  
		{ 
			System.out.println("Enter a potential palindrome:"); 
			
			str = scan.nextLine();
			str = str.toLowerCase();
			str = charCheck(str);
			System.out.println(str);
			left = 0; 
			right = str.length() - 1; 
			
			while (str.charAt(left) == str.charAt(right) && left < right) { 
				left++; 
				right--; 
			} 
			
			System.out.println(); 
			if (left < right) 
				System.out.println("That string is NOT a palindrome."); 
			else 
				System.out.println("That string IS a palindrome."); 

			System.out.println(); 
			System.out.print("Test another palindrome (y/n)? "); 
			another = scan.nextLine();
		}
	} 
} 	
