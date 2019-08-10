// I pledge my Honor that I have not cheated, 
// and will not cheat, on this assignment
// My full name goes here 
//My number here 

import java.text.*;

public class Sphere
{
    private double radius;

    public Sphere()
    {
        this.radius = 0;
    }

    public Sphere(double radius)
    {
        this.radius = radius;
    }

    public void setRadius(double radius)
    {
        this.radius = radius;
    }

    private double computeArea()
    {
        return 4 * Math.PI * Math.pow(this.radius, 2);
    }
    private double computeVolume()
    {
        return 4 * Math.PI * Math.pow(this.radius, 3) / 3;
    }

    public String toString() 
    {
        String pattern = new String("#.####");
        DecimalFormat fmt = new DecimalFormat(pattern);

        return ("Sphere radius: " + fmt.format(this.radius) + "   " +
                "volume: " + fmt.format(computeVolume()) + "   " + 
                "area: " + fmt.format(computeArea())
                );
    }

}
