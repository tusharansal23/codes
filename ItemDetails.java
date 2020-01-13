import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class ItemDetails {

	int[] a=new int[3];
	String itemName,itemType="";
	double itemPrice=0;
	int itemQuantity=0,itemNumber;
	int flag=1;
	//Method to check and assign the right index of items according to user requirement
	public int isInvalidItemNumber(int originalValue,int prevItemNumber) {
		try{
			if(originalValue!=prevItemNumber) {
				throw new InvalidNumberException("Entered value does not exist");
			}
			return 1;
		}
		catch(InvalidNumberException i) {
			i.printStackTrace();
			return 0;
		}
		
		
	}
	public int isValidItemNumber(int itemNumber) {
		int originalValue=0,prevItemNumber=itemNumber;
		for(int i=0;i<3;i++) {
			if(a[i]!=0) {
				originalValue++;
			}
			if(originalValue==itemNumber) {
				itemNumber=i+1;
				break;
			}
			
		}
		
			if(isInvalidItemNumber(originalValue,prevItemNumber)==1) {
				return itemNumber;
			}
			else return 0;	
			//i.printStackTrace();
			//System.out.println(i.getMessage());
			
		
		//return itemNumber;
	}
	//Function that check for the price value to be in correct order otherwise it will raise exception.
	public int isValidPrice() {
		
		try{
			if(itemPrice<0) {
			throw new InvalidNumberException("Item Price cannot be less than zero.");
			}
			return 1;
		}
		catch(InvalidNumberException i) {
			i.printStackTrace();
			return 0;
		}
		
	}
	//Function that check for the quantity value to be in correct order otherwise it will raise exception.
	public int isValidQuantity() {
		try{
			if(itemQuantity<0) {
			throw new InvalidNumberException("Item Quantity cannot be less than zero.");
			}
			return 1;
		}
		catch(InvalidNumberException i) {
			i.printStackTrace();
			return 0;
		}
	}
	//Function that check for the Name value to be in correct order otherwise it will raise exception.
	public int isvalidName() {
		try{
			for(int i=0;i<itemName.length();i++) {
			if(itemName.charAt(i)<'A' || itemName.charAt(i)>'Z' && itemName.charAt(i)<'a' ||itemName.charAt(i)>'z') {
				throw new NotACharacterException("You are using numbers or special characters.");
			}
		}
			return 1;
		}
		catch(NotACharacterException n) {
			n.printStackTrace();
			return 0;
		}
	}
	//Function that check for the Type value to be in correct order otherwise it will raise exception.
	public int isValidType() {
		try{
			if(!itemType.equals("1") && !itemType.equals("2") && !itemType.equals("3") 
				&& !itemType.equalsIgnoreCase("r") && !itemType.equalsIgnoreCase("m") && !itemType.equalsIgnoreCase("i") 
				&& !itemType.equalsIgnoreCase("raw") && !itemType.equalsIgnoreCase("manufactured") && !itemType.equalsIgnoreCase("imported")) {
			throw new InvalidTypeException("Invalid Type");
		}
			return 1;
		}
		catch(InvalidTypeException i) {
			i.printStackTrace();
			return 0;
		}
	}
	public int getItemName() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter item Name");
		itemName=sc.next();
		if(isvalidName()==1) {
			return 1;
		}
		else return 0;
			//getItemName();
	}
	public int getItemPrice() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Price of the item provided");
		itemPrice=sc.nextDouble();
		if(isValidPrice()==1) {
			return 1;
		}
		else return 0;
			//getItemPrice();
	}
	public int getItemQuantity() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Quantity of the item provided");
		itemQuantity=sc.nextInt();
		if(isValidQuantity()==1) {
			return 1;
		}
		else return 0;
			//getItemQuantity();
	}
	public int getItemType() {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter item Type it can be any of these");
		System.out.println("1.Raw \n2.Manufactured \n3.Imported");
		System.out.println("You can either enter its first character or number(for example-to select raw either write r,1,or raw (in any case)");
		itemType=sc.next();
		if(isValidType()==1) {
			return 1;
		}
		else return 0;
	}
	public int getItemNumber() throws Exception {
		
		Scanner sc=new Scanner(System.in);
		//Option for user to enter any of these(price,quantity,type) accordingly
		//System.out.println("Enter numeric or index value to select one of the following");
		//System.out.println("1.Item_Price\n2.Item_Quantity\n3.Item_Type");
		while(flag<=3) {
			for(int i=0;i<3;i++) {
				System.out.println(i+1+"="+a[i]);
			}
			System.out.println("flag = "+flag);
			int count=0;
			if(flag<3)
				System.out.println("Enter numeric or index value to select one of the following");
			for(int i=0;i<3;i++) {
				if(a[i]==1) {
					if(i==0) {
						count++;
						System.out.println(count+".Item_Price");
					}
				else if(i==1) {
					count++;
					System.out.println(count+".Item_Quantity");
				}
				else if(i==2) {
					count++;
					System.out.println(count+".Item_Type");
				}
			}
				
		}
			itemNumber=sc.nextInt();
			
			itemNumber=isValidItemNumber(itemNumber);
			 if(itemNumber<=0 || itemNumber>=4) { 
				 return 0; 
				} 
			
			 
			if(itemNumber==1) {
				a[0]--;
				while(getItemPrice()!=1);
				}
			else if(itemNumber==2) {
				a[1]--;
				while(getItemQuantity()!=1);
			}
			else if(itemNumber==3) {
				a[2]--;
				while(getItemType()!=1);
		//getItemType();
			}
			
		flag++;
	}
		return 1;
}
	
	//Constructor to initialize item_details according to the user requirement 
	public int itemDetails() throws Exception{
		
		
		for(int i=0;i<3;i++) {
			a[i]=1;
		}
		while(getItemName()!=1);	
		while(getItemNumber()!=1);
		
		TaxCalculator calculate = new TaxCalculator();
		return calculate.calculateTax(itemName,itemPrice,itemQuantity,itemType);
		 
		
	}
}
