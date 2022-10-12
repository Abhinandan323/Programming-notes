#include<iostream>
using namespace std;

void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg) {

    if (n==1){
        printf("Move disk 1 from peg %c to peg % c", frompeg, topeg);
        return;
    }
    
    TowersofHanoi(n-1, frompeg, auxpeg, topeg);
    
    printf("\n Move disk %d from peg %c to peg %c", n, frompeg, topeg);

    TowersOfHanoi(n-1, auxpeg, topeg, frompeg);
}
  
int main() {

    int n = 5;
    cout<<TowersOfHanoi(n, frompeg, topeg, auxpeg);


    return 0;
}
