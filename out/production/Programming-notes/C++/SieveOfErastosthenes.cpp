#include<iostream>
#include<vector>

using namespace std;

// to print prime numbers upto a certain number
void checkPrime(int n)
{ 
 vector <bool> isprime(n+1,true);
 for(int i=2;i*i<=n;i++)
 {
     if(isprime [i]==true)
     {
         for(int j=2*i;j<=n;j+=i)
             isprime [j]=false;
     }
 }
 for(int i=2;i<=n;i++)
 {
     if(isprime [i]==true)
     cout<<i<<" ";
 }
}
int main()
{
    cout<<"enter a number ";
    int n;
    cin>>n;
    checkPrime(n);
    return 0;
}
