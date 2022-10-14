// //Iterative way

#include<bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}

void printArray(int arr[], int size)
    {
    for(int i = 0; i<size; i++)
    cout<<arr[i] <<" ";
    cout<<endl;
    }

int main()
    {
        int arr[] = {1,2,3,4,5,6};

        int n = sizeof(arr) / sizeof(arr[10]);

        printArray(arr,n);

        rvereseArray(arr,0,n-1);

        printArray(arr,n);

        return 0;

    }

//Recursive way

#include <bits/stdc++.h>
using namespace std;

void reverseArray (int arr[], int start, int end)
{
    if(start >= end)
    return ;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start++, end--);
}

void printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){

    int arr[]= {1, 2, 3, 4, 5, 6};
    printArray (arr, 6);
    reverseArray(arr, 0 , 5);
    cout<< "Reversed array  is "<< endl;
    printArray(arr, 6);
    return 0 ;

}

//using vector
#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector<int> v){

    int s = 0, e = v.size()-1;
    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){

    for(int i = 0; i<v.size(); i++){
    cout<< v[i]<< " ";
    }
    cout<< endl;
}

int main(){

    vector <int> v;

    v.push_back (11);
    v.push_back (7);
    v.push_back (3);
    v.push_back (12);
    v.push_back (4);

    vector <int> ans = reverse(v);

    cout<< "Printing the Array"<<endl;
    print(ans);

    return 0;
}
