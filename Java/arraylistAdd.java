package DSA;
import java.util.ArrayList;
public class arraylistAdd {

	public static void main(String[] args) {
		ArrayList<Integer> list = new ArrayList<>();
		list.add(14);		// add elements in array list 
		list.add(15);
		System.out.println("list size: " + list.size());		// size of array list
		
		System.out.println("elem at index 1: "+list.get(1));  		// get element at particular index
		
		list.remove(1);		// remove elements from array list
		
		list.add(1);
		list.add(10);
		list.add(7264);
		list.set(0, 0);			// update element value at particular index
		 
		for(int elem : list) {
			System.out.print( + elem + " ");
		}
		System.out.println();
		System.out.println(list.size());
		
		System.out.println();
		
	}

}
