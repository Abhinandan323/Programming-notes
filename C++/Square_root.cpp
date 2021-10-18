#include<iostream>
using namespace std;
int main()
{
    int n,prec;
    float inc=1,sq=0;
    cout<<"Enter the number whose square root you want   ";
    cin>>n;
    cout<<"Enter the precision :";
    cin>>prec;
    for(int i=0;i<=prec;i++)// We want it prec+1 times as one is for the integer part 
    {
     while((sq*sq)<=n)
     {  
      sq+=inc; 
     }
     sq=sq-inc;
     inc=inc/10;
     
    }
    cout<<sq<<" is the square root of"<<n<<endl;
}
