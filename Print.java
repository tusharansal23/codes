
public class Print {

	public void display(String itemName,double itemPrice,double priceBeforeTaxCalculation,double priceAfterTaxCalculation) {
		double finalPrice=priceBeforeTaxCalculation + priceAfterTaxCalculation;
		System.out.println("Item_Details............................");
		System.out.print("Item_Name = "+itemName+"  ");
		System.out.print("Item_Price = "+itemPrice+" (per unit cost)  ");
		System.out.print("Tax_Per_Item = "+priceAfterTaxCalculation+"  ");
		System.out.print("Total price = "+finalPrice);
	}
}
