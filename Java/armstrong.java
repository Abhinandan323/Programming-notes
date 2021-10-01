package beginner_programs;

public class armstrong {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n =1534;
		int temp=n;
		
		int r,s=0,t;
		while(n>0)
		{
		 r=n%10;
		 n=n/10;
		 s = s + r*r*r;
		}
		if(temp == s)
		{
			System.out.println("armstrong");
			
		}
		else
			System.out.println("not an armstrong");
	}
	

}
