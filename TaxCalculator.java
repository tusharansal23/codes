import java.util.*;
public class TaxCalculator {
	
	public int calculateTax(String itemName,double itemPrice,int itemQuantity,String itemType) {
		double priceAfterTaxCalculation = 0;
		double priceBeforeTaxCalculation=itemPrice*itemQuantity;
		
		if(itemType.equals("1") || itemType.equalsIgnoreCase("raw") || itemType.equalsIgnoreCase("r")) {
			priceAfterTaxCalculation = (priceBeforeTaxCalculation*12.5)/100;
		}
		else if(itemType.equals("2") || itemType.equalsIgnoreCase("manufactured") || itemType.equalsIgnoreCase("m")) {
			 double initialTax = (priceBeforeTaxCalculation*12.5)/100;
			 double additionalTax = (initialTax*2)/100;
			 priceAfterTaxCalculation = initialTax + additionalTax;
			 
		}
		else if(itemType.equals("3") || itemType.equalsIgnoreCase("imported") || itemType.equalsIgnoreCase("i")) {
			double importDuty = (priceBeforeTaxCalculation*10)/100;
			double surcharge;
			if(importDuty <= 100) {
				surcharge = 5;
			}
			else if(importDuty > 100 && importDuty <= 200) {
				surcharge = 10;
			}
			else {
				surcharge = (itemPrice*5)/100;
			}
			priceAfterTaxCalculation = importDuty + surcharge;
			
		}
		Print p=new Print();
		p.display(itemName,itemPrice,priceBeforeTaxCalculation,priceAfterTaxCalculation);
		System.out.println("\n\n\n");
		System.out.println("If you want to enter details of any other item");
		System.out.println("Use 1,y or yes in any case(upper or lower) for entering otherwise 0,n or no");
		Scanner sc=new Scanner(System.in);
		String input=sc.nextLine();
		if(input.equals("0") || input.equalsIgnoreCase("n") || input.equalsIgnoreCase("no")) {
			 return 0;
		}
		return 1;
	}
}
