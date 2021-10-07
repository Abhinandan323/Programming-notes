package Chapter5;

public class PrimeNumbers5_20 {
public static void main(String ar[]) {
	int count2=1;
	for(int i=2;i<=1200;i++) {
		int count=0;
		for(int j=2;j<=i;j++) {
			if(i%j==0)
				count++;
		}
		if(count==1) {
			System.out.print(i+" ");
		count2++;	
		}
		if(count2%9==0) {
			System.out.println();
			count2=1;
		}
}}
}
