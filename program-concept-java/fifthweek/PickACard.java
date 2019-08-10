// I pledge my Honor that I have not cheated, and
// will not cheat, on this assignment
// Name: My full name goes here (My comment goes here)
// Unumber: My U number goes here

import java.util.Random;

public class PickACard {
	
	public enum Rank {
		Ace,
		One,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King
	}

	public enum Suit {
		Spades,
		Hearts,
		Diamonds,
		Clubs
	}

	public static void main(String[] args) {
		
		//declaration
		Random randomizer = new Random();
		int r, s, randCard = randomizer.nextInt(51);
		Suit suit;
		//without declaration it is not initialized
		Rank rank = Rank.Ace;

		//determining the card
		if (randCard <= 12 && randCard >= 0) { suit = Suit.Spades; }
		else if (randCard <= 25 && randCard >= 13) { suit = Suit.Hearts; }
		else if (randCard <= 38 && randCard >= 26) { suit = Suit.Diamonds; }
		else { suit = Suit.Clubs; }

		//integer values
		//division to define rank amongs 13 different
		s = suit.ordinal();
		r = randCard % 13;

		for (Rank rank_i : Rank.values()) { if (r == rank_i.ordinal()) { rank = rank_i; } }

		//print
		System.out.println("The card is " + rank + " of " + suit);
	} // end of main
} // end of class
