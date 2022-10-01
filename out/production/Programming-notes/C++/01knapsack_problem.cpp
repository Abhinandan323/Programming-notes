#include<stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int val[], int weight[],int w,int n)
{
    if(n==0 || w==0 ) return 0;
    
    if(weight[n-1]>w)
        return knapsack(val,weight,w,n-1);
    else
        return max(val[n-1]+knapsack(val,weight,w-weight[n-1],n-1),   
        knapsack(val,weight,w,n-1) ); 
  

}
// Driver program to test above function
int main()
{
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	printf("%d", knapsack(val,wt,W,n));
	return 0;
}