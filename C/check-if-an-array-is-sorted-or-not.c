// Recursive approach to check if an
// Array is sorted or not
#include <bits/stdc++.h>
using namespace std;

// Function that returns 0 if a pair
// is found unsorted
int arraySortedOrNot(int arr[], int n)
{
	// Array has one or no element or the
	// rest are already checked and approved.
	if (n == 1 || n == 0)
		return 1;

	// Unsorted pair found (Equal values allowed)
	if (arr[n - 1] < arr[n - 2])
		return 0;

	// Last pair was sorted
	// Keep on checking
	return arraySortedOrNot(arr, n - 1);
}

// Driver code
int main()
{
	int arr[] = { 20, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (arraySortedOrNot(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}
