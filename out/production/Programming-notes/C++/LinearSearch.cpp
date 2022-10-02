#include <iostream>
using namespace std;
int main() {
  int arr[5]={1,2,3,4,5};
  int key=9;
  int size=sizeof(arr)/sizeof(int);
  int i;
  for(i=0;i<size;i++)
  {
      if(key==arr[i]){
      cout<<"Yes element is present"<<endl;
      break;
      }
  }
  if(i==size)
  cout<<"Element is not present"<<endl;


 
}
