#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the numbers to sum,"<<endl;
    int num=0, sum=0;

    do {
        sum += num;
        cout << "Please enter the number : ";
        cin >> num;
    }

    while (num>=0);
   
    cout << "The sum of n numbers given is : " << sum << endl;
    
    return 0;
}