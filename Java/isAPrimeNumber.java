import java.util.Scanner;

class isAPrimeNumber {
    public static void main(String ars[]) {

        Scanner sc = new Scanner(System.in);
        int n, i = 2;
        boolean isPrime = true;
        
	    System.out.println("Enter a positive number: ");
	    n = sc.nextInt();
	    
	    while (isPrime && i < n / 2) {
	        if (n % i == 0) {
	            isPrime = false;
	        }
	        i++;
	    }
	    
	    if (isPrime) {
	        System.out.println(n + " is a prime number");
	    } else {
	        System.out.println(n + " is not a prime number");
	    }
}

}