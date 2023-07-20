#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int* arr, int n){
    for(int i=0;i<n;i++,n--){
        swap(arr[i],arr[n-1]);
    }
}

int main(){
    int arr[]={12, 23, 34, 45, 12, 87, 54, 76};
    int n= sizeof(arr)/sizeof(int);
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
}