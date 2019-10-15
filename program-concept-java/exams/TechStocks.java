import java.text.NumberFormat;

public class TechStocks {
   
   private String companyName, label;
   private double stockPrice;
   private int numberOfShares;
   private static double totalCost = 0;

   public TechStocks(String companyName, int numberOfShares) {
      this.companyName = companyName;
      this.numberOfShares = numberOfShares;
      setLabel();
      setPrice();
   }

   private void setLabel() {
      switch (companyName.toLowerCase()) {
         case "amazon":
            label = "AMZN";
            break;
         case "apple":
            label = "AAPL";
            break;
         case "facebook":
            label = "FB";
            break;
         case "gopro":
            label = "GPRO";
            break;
         case "google":
            label = "GOOGL";
            break;
         case "irobot":
            label = "IRBT";
            break;
         case "microsoft":
            label = "MSFT";
            break;
         case "netflix":
            label = "NFLX";
            break;
         case "tesla":
            label = "TSLA";
            break;
         case "twitter":
            label = "TWTR";
            break;
      }
   }

   private void setPrice() {
      switch (companyName.toLowerCase()) {
         case "amazon":
            stockPrice = 1863.04;
            break;
         case "apple":
            stockPrice = 199.25;
            break;
         case "facebook":
            stockPrice = 178.87;
            break;
         case "gopro":
            stockPrice = 6.71;
            break;
         case "google":
            stockPrice = 1231.91;
            break;
         case "irobot":
            stockPrice = 129.68;
            break;
         case "microsoft":
            stockPrice = 120.77;
            break;
         case "netflix":
            stockPrice = 359.46;
            break;
         case "tesla":
            stockPrice = 273.36;
            break;
         case "twitter":
            stockPrice = 34.46;
            break;
      }
   }

   private double calCost() {
      totalCost += stockPrice * numberOfShares;
      return stockPrice * numberOfShares;
   }

   public static double getTotalCost() {
      return totalCost;
   }

   public String toString() {
      NumberFormat fmt = NumberFormat.getCurrencyInstance();
      String summary = String.format("%-20s%-20s%-20s%-20s", companyName, label, fmt.format(stockPrice), fmt.format(calCost()));
      return summary;
   }
}
