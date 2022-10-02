package Java.numbercardinality;

import java.util.Scanner;

public class NumberCardinality {

    public static void main(String[] args){
        while (true){
            System.out.println("Enter a number:");
            Scanner num = new Scanner (System.in);
            String num1 = num.next();

            try {
                if (num1.endsWith("0")) {
                    System.out.println("zero");
                    break;
                } else if (num1.endsWith("5")) {
                    System.out.println("five");
                    break;
                } else if (Integer.parseInt(num1) % 2 == 0) {
                    System.out.println("Even");
                    break;
                } else {
                    System.out.println("Odd");
                    break;
                }
            } catch (NumberFormatException nfe) {
                System.out.println("Wrong number format!");
            }
        }
    }
}
