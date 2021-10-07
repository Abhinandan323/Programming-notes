package Chapter5;

import java.util.Scanner;

public class GCD5_14 {
	public static void main(String ar[]) {
		
		Scanner scan=new Scanner(System.in);
		int n1=scan.nextInt();
		int n2=scan.nextInt();
		int gcd = 1; 
	
	int k = 2; 
	while (k <= n1 && k <= n2) {
	 if (n1 % k == 0 && n2 % k == 0)
	 gcd = k;
	 k++; 

	}
	System.out.println("GCD of two number is :"+gcd);
	}
}
