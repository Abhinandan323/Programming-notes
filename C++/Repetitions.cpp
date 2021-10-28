#include<iostream>
using namespace std;

int ex1_IncrementDecrement(int data1, int data2) {
	cout << "Params: " << data1 << " ," << data2 << endl;

	int x = 1;
	x++; // 2
	cout << x << endl;

	// in a cout statement
	cout << x++ << endl; // 2
	cout << ++x << endl; // 4
	cout << x++ << ", " << x++ << ", " << ++x << ", " << ++x << endl; // undefined behavior due to order of evaluation
	// now x is 8
	
	// in an assignment statement
	int y = x++; // post increment
	cout << y << endl; // 8

	y = ++x; // pre-increment
	cout << y << endl; // 10

	// in an arithmetic expression
	y = x++ + y;
	cout << x << ", " << y << endl; // 11, 20

	y = ++x + x;
	cout << x << ", " << y << endl; // 12, 24

	return y++; // 24
}

void ex2_Counter() {
	int counter = 0;
	while (counter < 10) {
		cout << counter << endl;
		counter++;
	}

	cout << "Printing again..." << endl;
	counter = 0;
	while (++counter < 10)
		cout << counter << endl;

}

void ex3_Table(int n) {
	int counter = 1;
	while (counter <= 10) {
		cout << n << " x " << counter << " = " << counter * n << endl;
		counter++;
	}
}

void ex3_Power(int n) {
	int counter = 1;
	int pow = n;
	while (counter < 10) {
		cout << pow << endl;
		pow *= n;
		counter++;
	}
}

void ex4_InfiniteLoop() {
	int counter = 0;
	while (true) {
		cout << counter << endl;
		counter++;
		if (counter == 10) {
			break; // terminates the loop
		}
	}
	cout << "function ends here" << endl;
}

void ex5_InputValidation() {
	int input;
	do {
		cout << "Please enter a value between 0 and 10: ";
		cin >> input;	
	}while(input <=0 || input >= 10);
	
	cout << "Continuing now to print the table" << endl;
	ex3_Table(input);	
}

void ex6_SquarePattern(int side) {
	int row = 0;
	while (row < side) {
		int column = 0;
		while (column < side) {
			cout << "*";
			column++;
		}
		row++;
		cout << endl;
	}
}