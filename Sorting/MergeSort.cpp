#include<iostream>
using namespace std;

void print(int* arr, int size){
    for( int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int* arr, int start, int end){

    int mid = (start+ end)/2;
    int size1 = mid - start +1;
    int size2 = end - mid;
    int* arr1= new int[size1];
    int* arr2= new int[size2];
    int index = start;
    for(int i=0; i<size1;i++){
        arr1[i]=arr[index++];
    }
    for(int i=0; i<size2;i++){
        arr2[i]=arr[index++];
    }
    
    int index1=0, index2=0;
    index = start;
    while(index1 < size1 && index2 < size2){
        
        if(arr1[index1]<arr2[index2])
            arr[index++] = arr1[index1++];
        else    
            arr[index++] = arr2[index2++];
    }

    while(index1 < size1){
        arr[index++] = arr1[index1++];
    }
    while(index2 < size2){
        arr[index++] = arr2[index2++];
    }

}

void mergeSort(int* arr, int start, int end)
{
    // Base 
    if(start>=end)
        return;
    
    int mid = (start + end)/2;

    // sort 1st half
    mergeSort(arr, start, mid);

    //sort 2nd half
    mergeSort(arr, mid+1, end);

    // mergeing two sorted array
    merge(arr, start, end);

}

int main()
{
    int arr[]={ 2, 7, 4, 9, 2, 1, 5, 3};
    int size= sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    mergeSort(arr, 0, size-1);
    print(arr, size);
    return 0;
}