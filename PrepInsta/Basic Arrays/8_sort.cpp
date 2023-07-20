#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int* arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]= { 12, 34, 54, 24, 87, 45, 23, 98};
    int n=sizeof(arr)/sizeof(int);
    print(arr, n);
    sort(arr, n);
    print(arr, n);
}