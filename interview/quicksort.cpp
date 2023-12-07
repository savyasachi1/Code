#include<iostream>
using namespace std;

int partition(int* arr, int start, int end){
    int pivot = arr[start];
    int i = start + 1;
    for(int j = start+1; j<=end;j++){
        if(pivot > arr[j]){
            
        }
    }
}

void quicksort(int* arr, int start, int end){

    if(start>=end)
        return;
    
    int p = partition(arr, start, end);

    quicksort(arr, start, p-1);
    quicksort(arr, p+1, end);
}

int main()
{
    int arr[] = {20, 30, 15, 10, 50};
    int n = sizeof(arr)/sizeof(int);
    quicksort(arr,0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}