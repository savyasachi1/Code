#include<iostream>
using namespace std;

void print(int* arr, int size){
    for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int* arr, int start, int end){
    int pivot = arr[start];
    int i = start + 1;
    for(int j = start + 1; j <= end; j++) {
        if(arr[j] < pivot) {
            swap(arr[i++], arr[j]);
        }
    }
    swap(arr[start], arr[i - 1]);
    return (i - 1);
}

void QuickSort(int* arr, int start, int end){

    // base class
    if(start>=end)
        return;
    
    // finding partition element index
    int p = partition(arr, start, end);

    // using recursion for other halves
    QuickSort(arr, start, p-1);
    QuickSort(arr, p+1, end);


}

int main()
{
    int arr[]= { 7, 5, 2, 9, 1,5, 2, 7, 4};
    int size = sizeof(arr)/sizeof(int);
    print(arr, size);
    QuickSort(arr, 0, size-1);
    print(arr, size);
    return 0;
}