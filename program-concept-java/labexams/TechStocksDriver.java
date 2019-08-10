import java.util.Scanner;

public class TechStocksDriver {
    public static void main(String[] args) {
        int shares;
        String name;
        int numCompanies;
        Scanner scan = new Scanner(System.in);
        
        do {
            System.out.print("How many companies' stocks are you interested in?\n" + "Amount must be >= 1: ");
            numCompanies = scan.nextInt();
        } while (numCompanies < 1);
        
        TechStocks[] companyArray = new TechStocks[numCompanies];
        
        for (int i = 0; i < numCompanies; i++) {
            System.out.print("Enter name of the company " + (i + 1) + ": ");
            name = scan.next();
            System.out.print("Enter amount of shares (> 0)" + " for " + name + ": ");
            shares = scan.nextInt();
            
            while (shares <= 0) {
                System.out.print("Amount of shares must be greater than 0. " + "Re-enter amount of shares for a company "
                        + (i + 1) + ": ");
                shares = scan.nextInt();
            }
            
            companyArray[i] = new TechStocks(name, shares);
            System.out.println();
        }
        
        System.out.print("Your listed companies are: \n");
        
        for (int j = 0; j < numCompanies; j++)
            System.out.println(companyArray[j]);
        
        System.out.println("The total amount is: $" + TechStocks.getTotalCost());
    }
}
