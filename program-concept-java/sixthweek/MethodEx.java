// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.*;
//import java.lang.Iterable;

public class MethodEx {

	public static int findSumInterval(int[] arr, int start, int end) {
		int sum = 0;

		for (int i = start; i <= end; i++) {
			sum += arr[i];
		}

		return sum;
	}
	
	/*public static int convertStringToInt(String[] arr) {
		int[] result;
		int i = 0;
		try {
			for (String number : arr) {
				result[i] = Integer.parseInt(number);
				i++;
			}
		}
		catch (NumberFormatException e) {
			result = {0};
		}

	}*/

	public static enum Cars { Toyota, Chevy, Tesla }
    
    public static void main(String args[]) {

    	int x = 0;
        do{
        	x++;
        	System.out.println("Do while: " + x);
        } while(x < 5);

        x = 0;
        while(x < 5) {
        	x++;
        	System.out.println("While: " + x);
        }

        } // end of main
} // end of class
