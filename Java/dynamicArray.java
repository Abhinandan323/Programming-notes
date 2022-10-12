// Java program to implement 
// our own Dynamic Array class 

import java.util.*; 

// Self implementation of 
// the ArrayList Class in Java 
class ArrayListClass { 

	// arr is the array which stores 
	// our ArrayList elements 
	private int arr[]; 

	// capacity is the total storage 
	// capacity of the ArrayList 
	private int capacity; 

	// current is the number of elements 
	// currently present in the ArrayList 
	private int current; 

	// Default constructor to initialise 
	// an initial capacity of 1 element and 
	// allocating storage using dynamic allocation 
	public ArrayListClass() 
	{ 
		arr = new int[1]; 
		capacity = 1; 
		current = 0; 
	} 

	// Function to add an element at the last 
	public void push(int data) 
	{ 

		// if the number of elements 
		// is equal to the capacity, 
		// that means we don't have space 
		// to accommodate more elements. 
		// We need to double the capacity 
		if (current == capacity) { 
			int temp[] = new int[2 * capacity]; 

			// copying old array elements 
			// to new array 
			for (int i = 0; i < capacity; i++) 
				temp[i] = arr[i]; 

			capacity *= 2; 
			arr = temp; 
		} 

		// Inserting data 
		arr[current] = data; 
		current++; 
	} 

	// function to add element at any index 
	void push(int data, int index) 
	{ 

		// if index is equal to capacity 
		// then this function is same 
		// as push defined above 
		if (index == capacity) 
			push(data); 
		else
			arr[index] = data; 
	} 

	// Function to extract 
	// element at any index 
	int get(int index) 
	{ 

		// if index is within the range 
		if (index < current) 
			return arr[index]; 

		// if index is outside the range 
		return -1; 
	} 

	// function to delete last element 
	void pop() 
	{ 
		current--; 
	} 

	// function to get size 
	// of the ArrayList 
	int size() 
	{ 
		return current; 
	} 

	// function to get capacity 
	// of the ArrayList 
	int getcapacity() 
	{ 
		return capacity; 
	} 

	// function to print ArrayList elements 
	void print() 
	{ 
		for (int i = 0; i < current; i++) { 
			System.out.print(arr[i] + " "); 
		} 
		System.out.println(); 
	} 

	// Driver program to check ArrayListClass 
	public static void main(String args[]) 
	{ 
		ArrayListClass v 
			= new ArrayListClass(); 
		v.push(10); 
		v.push(20); 
		v.push(30); 
		v.push(40); 
		v.push(50); 

		System.out.println("ArrayList size: "
						+ v.size()); 
		System.out.println( 
			"ArrayList capacity: "
			+ v.getcapacity()); 
		System.out.println( 
			"ArrayList elements: "); 
		v.print(); 

		v.push(100, 1); 

		System.out.println( 
			"\nAfter updating 1st index"); 

		System.out.println( 
			"ArrayList elements: "); 
		v.print(); 
		System.out.println( 
			"Element at 1st index: "
			+ v.get(1)); 

		v.pop(); 

		System.out.println( 
			"\nAfter deleting the"
			+ " last element"); 

		System.out.println( 
			"ArrayList size: "
			+ v.size()); 
		System.out.println( 
			"ArrayList capacity: "
			+ v.getcapacity()); 

		System.out.println( 
			"ArrayList elements: "); 
		v.print(); 
	} 
} 
