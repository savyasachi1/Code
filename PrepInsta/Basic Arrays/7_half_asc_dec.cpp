#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortIt(int* arr, int n){
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=n/2;i<n;i++){
        for(int j=n/2;j<n;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={ 12, 34, 54, 24, 87, 45, 23, 98};
    int n= sizeof(arr)/sizeof(int);
    print(arr,n);
    sortIt(arr,n);
    print(arr,n);
}