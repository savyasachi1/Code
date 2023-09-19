#include<iostream>
using namespace std;

int LargeSmallSum(int* arr, int len){
    int largest = -1;
    int secLargest = largest;
    for( int i=0;i<len;i+=2){
        if(arr[i]>largest){
            secLargest = largest;
            largest = arr[i];

        }
        else if(arr[i]>secLargest)
            secLargest = arr[i];
    }
    int smallest = 15;
    int secSmallest = smallest;
    for( int i=1;i<len;i+=2){
        if(arr[i]<smallest){
            secSmallest = smallest;
            smallest = arr[i];

        }
        else if(arr[i]<secSmallest)
            secSmallest = arr[i];
    }
    return secLargest+secSmallest;
}

int main()
{
    int arr[]= { 1, 8, 0, 2, 3, 5, 6};
    int n = 7;
    cout<<LargeSmallSum(arr, n);
    return 0;
}