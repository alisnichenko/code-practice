// I pledge my Honor that I have not cheated, 
// and will not cheat, on this assignment
// My full name goes here 
//Unumber: My number here 

import java.util.Random;
import java.util.Scanner;

public class SphereDriver
{
    public static void main(String[] args)
    {   
        // Declaring some useful variables
        Scanner scan = new Scanner(System.in);
        Random randomizer = new Random();
        double randomRadius = randomizer.nextDouble() * 10 + 1;
        double radius;
        // Instantiating the objects
        Sphere sphere1 = new Sphere();
        Sphere sphere2 = new Sphere(randomRadius);
        // Initial output and input
        System.out.println("Here is the initial information for the 2 spheres");
        System.out.println(sphere1.toString());
        System.out.println(sphere2.toString());
        System.out.println();
        System.out.print("Enter the radius for a Sphere: ");
        radius = scan.nextDouble();
        System.out.println();
        // Updating the radius
        sphere1.setRadius(radius);
        // Printing the final version
        System.out.println("Here is the final information for the 2 spheres");
        System.out.println(sphere1.toString());
        System.out.println(sphere2.toString());
    }
}
