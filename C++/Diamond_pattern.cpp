#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    for(int i=1, s=0; i<=n; i++, s++)
    {
        int j;
        for(j=1; j<=n-i; j++)
            cout<<"  ";
        cout<<"* ";
        for(j=1; j<=((2*s)-1); j++)
            cout<<"  ";  
        if(i!=1)     
            cout<<"* ";    
        cout<<"\n";        
    }
    for(int i=n, s=n-1; i>=1; i--, s--)
    {
        int j;
        for(j=1; j<=n-i; j++)
            cout<<"  ";
        cout<<"* ";
        for(j=1; j<=((2*s)-1); j++)
            cout<<"  ";
        if(i!=1)     
            cout<<"* ";      
        cout<<"\n";        
    }
	return 0;
}
