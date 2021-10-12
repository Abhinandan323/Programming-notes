//Program to implement MergeSort

#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);

int main()
{
    int n;
    cout<<"Enter the number of elements of the array:\n";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    auto begin = high_resolution_clock::now();
    mergeSort(array,0,n-1);
    cout<<"The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - begin);
    cout<<"\nThe total time taken is "<< duration.count()<<" milliseconds";
    return 0;
}

void mergeSort(int arr[], int low, int high)
{
    if(low >= high)
        return;
    int mid = low + (high-low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void merge(int arr[], int low, int mid, int high)
{
    int s1 = mid - low + 1;
    int s2 = high - mid;
    int t1[s1], t2[s2];

    for(int i=0;i<s1;i++)
        t1[i] = arr[low + i];
    for(int j=0;j<s2;j++)
        t2[j] = arr[mid + 1 + j];
    
    int i = 0;
    int j = 0;
    int k = low;

    while (i < s1 && j < s2) {
        if (t1[i] <= t2[j]) {
            arr[k] = t1[i];
            i++;
        }
        else {
            arr[k] = t2[j];
            j++;
        }
        k++;
    }
    while (i < s1) {
        arr[k] = t1[i];
        i++;
        k++;
    }
    while (j < s2) {
        arr[k] = t2[j];
        j++;
        k++;
    }
}