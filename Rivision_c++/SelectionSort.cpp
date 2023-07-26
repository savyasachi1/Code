#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *arr, int n){
    int iter;
    for(int i=0;i<n-1;i++){
        iter=i;
        for(int j=i+1;j<n;j++){
            if(arr[iter]>arr[j])
                iter=j;
        }
        swap(arr[i],arr[iter]);
    }
}

int main(){
    int arr[]={ 2, 7, 5, 4, 9, 1, 5, 6};
    int n=sizeof(arr)/sizeof(int);
    print(arr,n);
    selectionSort(arr,n);
    print(arr,n);
}