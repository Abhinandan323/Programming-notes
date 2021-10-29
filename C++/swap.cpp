/*  C++ Program to Swap two numbers using call by reference  */

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
        int a,b;
        cout<<"Enter Value Of A :: ";
        cin>>a;
        cout<<"\nEnter Value of B :: ";
        cin>>b;
        
        cout<<"\nBefore Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
        
        swap(a,b);
        
        cout<<"\nOutside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}

void swap(int &a,int &b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<a<<"\tB = "<<b<<"\n";
}
