#include <iostream>
using namespace std;
int main()
{
    char ch;
    int x=0,y=0;
    cin>>ch;
    while(ch!='\n')
     {
         switch(ch)
         {
             case 'N': y+=1; break;
             case 'S': y-=1;break;
             case 'E': x+=1;break;
             case 'W': x-=1; break;
        }
        ch=cin.get();
     }
     cout<<"Displacement is :"<<x<<" "<<y<<endl;
     if(x >=0 && y>=0)
     {
         for(int i=1;i<=x;i++)
         cout<<"E";
         for(int j=1;j<=y;j++)
         cout<<"N";
     }
     else if(x <=0 && y>=0)
     {
         for(int i=1;i<=-x;i++)
         cout<<"W";
         for(int j=1;j<=y;j++)
         cout<<"N";
     }
      else if(x <=0 && y<=0)
     {
         for(int i=1;i<=-x;i++)
         cout<<"W";
         for(int j=1;j<=-y;j++)
         cout<<"S";
     }
     else if(x >=0 && y<=0)
     {
         for(int i=1;i<=x;i++)
         cout<<"E";
         for(int j=1;j<=-y;j++)
         cout<<"S";
     }
     else 
     cout<<"Stay here ! Don't move;";
}
