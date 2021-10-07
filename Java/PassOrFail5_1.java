package Chapter5;

import java.util.Scanner;

public class PassOrFail5_1 {
public static void main(String ar[]) {
	Scanner scan=new Scanner(System.in);
	System.out.print("Enter your score: ");
	int n=scan.nextInt();
	while(n!=-1) {
		if(n>=60)
			System.out.println("You pass the exam.");
		else  
			System.out.println("You don't pass the exam.");
		
		System.out.print("Enter your score: ");
		n=scan.nextInt();
		}
	System.out.println("No numbers are entered except 0");
}
}
